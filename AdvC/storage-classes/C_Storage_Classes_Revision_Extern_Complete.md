# C Storage Classes — Revision Notes

This README contains revision notes for the C storage-class keywords discussed so far:

- `auto`
- `register`
- `static`

`extern` is covered completely in Sections 37–95 below.

---

# 1. What are Storage Classes in C?

Storage-class specifiers tell us important properties of an object/function, such as:

- scope
- storage duration (lifetime)
- linkage
- and, for some cases, whether a register-storage request is made

The four commonly taught storage-class keywords in C are:

```text
auto
register
static
extern
```

---

# 2. `auto` Storage Class

## 2.1 What does `auto` mean?

`auto` is a storage-class keyword used for local variables with **automatic storage duration**.

Example:

```c
void fun()
{
    auto int x = 10;
}
```

For a local variable, writing `auto` is usually unnecessary because a local variable without another storage-class specifier is automatically automatic.

So:

```c
auto int x = 10;
```

and:

```c
int x = 10;
```

have automatic storage duration when declared as ordinary local variables.

---

## 2.2 Where can `auto` be used?

`auto` is used for variables declared inside a block/function.

```c
void fun()
{
    auto int x = 10;
}
```

A file-scope/global variable cannot be declared with `auto`.

---

## 2.3 Scope of an `auto` variable

An ordinary local `auto` variable has **block scope**.

```c
void fun()
{
    auto int x = 10;

    printf("%d", x);
}
```

`x` can be used inside its block.

It cannot be directly accessed from another function.

---

## 2.4 Lifetime of an `auto` variable

An automatic variable exists while execution is within its block.

When the block is left, its lifetime ends.

Example:

```c
void fun()
{
    int x = 10;
}
```

When `fun()` finishes, the lifetime of `x` ends.

---

## 2.5 Important point

`auto` does **not** mean "automatically initialized to zero."

Example:

```c
void fun()
{
    int x;
    printf("%d", x);
}
```

Reading `x` before assigning it a value gives an **indeterminate value** and using it this way can result in undefined behavior.

If you want a known value:

```c
int x = 0;
```

---

## 2.6 Quick `auto` summary

```text
auto
 |
 +-- Usually local variable
 +-- Block scope
 +-- Automatic storage duration
 +-- Lifetime ends when block is left
 +-- Usually written implicitly:
     int x;
```

---

# 3. `register` Storage Class

## 3.1 What does `register` mean?

`register` is a storage-class keyword used to request that a variable be kept in a CPU register if possible.

Example:

```c
register int x = 10;
```

The important word is **request**.

The compiler is NOT required to actually store the variable in a CPU register.

Modern compilers can make their own optimization decisions.

---

## 3.2 Why/when do we use `register`?

The idea is to request faster access for variables that are accessed frequently.

A common example is a loop counter:

```c
for (register int i = 0; i < 1000; i++)
{
    printf("%d ", i);
}
```

Historically, programmers used `register` to suggest that frequently accessed variables should use CPU registers.

---

## 3.3 Can we use `register` normally?

Yes.

```c
#include <stdio.h>

int main()
{
    register int x = 10;

    printf("%d\n", x);

    x++;

    printf("%d\n", x);

    return 0;
}
```

Output:

```text
10
11
```

You can read and modify a register variable normally.

---

## 3.4 Scope of a `register` variable

A local register variable has **block scope**.

```c
void fun()
{
    register int x = 10;

    printf("%d", x);
}
```

`x` is available only within its block.

---

## 3.5 Lifetime of a `register` variable

A local register variable has **automatic storage duration**.

Its lifetime normally lasts while execution is within its block.

When the block is left, its lifetime ends.

---

## 3.6 IMPORTANT RULE: You cannot use `&` on a register variable

This is the most important `register` rule for exams/interviews.

```c
register int x = 10;

printf("%p", (void *)&x);   // ERROR
```

Why?

The `&` operator asks for the **address** of the object.

C does not allow the address of an object declared with `register` to be taken.

So:

```c
&x
```

is not allowed when `x` is declared with `register`.

---

## 3.7 What can you do with a register variable?

You CAN:

```c
register int x = 10;

printf("%d", x);   // valid
x++;               // valid
x = 50;            // valid
```

You CANNOT:

```c
&x;                // ERROR
```

because taking its address is prohibited.

---

## 3.8 Register pointer — important distinction

This is a common MCQ trap.

```c
int x = 10;
register int *p = &x;
```

Here:

```text
x -> normal int variable
p -> register variable (the pointer itself)
```

Therefore:

```c
&p    // ERROR
&x    // valid
*p    // valid
```

You can use the register pointer to access the object it points to.

```c
printf("%d", *p);
```

Output:

```text
10
```

---

## 3.9 Can `register` be used for a function parameter?

Yes.

```c
void fun(register int x)
{
    printf("%d", x);
}
```

This is valid.

The parameter is a local object associated with the function call.

---

## 3.10 Can a global variable be declared `register`?

No.

This is invalid:

```c
register int x = 10;   // at file scope
```

`register` is intended for block-scope objects and function parameters.

---

## 3.11 `register` does NOT guarantee CPU-register storage

Do NOT say:

> "A register variable is always stored in a CPU register."

Better interview answer:

> "`register` requests that the implementation use a CPU register for the variable when possible, but the compiler is not required to honor the request."

---

## 3.12 `register` quick table

| Property | `register` |
|---|---|
| Storage-class keyword | Yes |
| Main purpose | Request register storage |
| Compiler guaranteed to use CPU register? | No |
| Local scope | Block |
| Local lifetime | Automatic |
| Can read variable? | Yes |
| Can modify variable? | Yes |
| Can take address with `&`? | **No** |
| Can be a function parameter? | Yes |
| Can be file-scope/global? | No |

---

# 4. `register` — What happens if you break the rule?

## Example:

```c
int main()
{
    register int x = 10;

    printf("%p", (void *)&x);

    return 0;
}
```

The compiler must diagnose this constraint violation.

The important reason is:

```text
&x
 |
 +-- asks for address
      |
      +-- address of a register-declared object cannot be taken
```

For PE/PET, remember:

> `register` + `&` = NOT ALLOWED

---

# 5. `register` — Tricky PE/PET Questions

## Q1. What is the main purpose of `register`?

A. Make a variable constant  
B. Request register storage  
C. Make a variable global  
D. Give external linkage

**Answer: B**

---

## Q2. Which operation is not allowed on a register variable?

```c
register int x = 10;
```

A. `x++`  
B. `x = 20`  
C. `printf("%d", x)`  
D. `&x`

**Answer: D**

---

## Q3. Is the compiler required to store a `register` variable in a CPU register?

**Answer: No.**

It is a request, not a guarantee.

---

## Q4. Which is invalid?

```c
int x = 10;
register int *p = &x;
```

A. `&x`  
B. `*p`  
C. `&p`  
D. Both A and B

**Answer: C**

`p` itself is the register variable, so its address cannot be taken.

---

# 6. `static` Storage Class

`static` has different effects depending on where it is used.

The three important cases are:

1. Static local variable
2. Static file-scope/global variable
3. Static function

---

# 7. Static Local Variable

## 7.1 What is a static local variable?

A local variable declared with `static` is called a static local variable.

Example:

```c
void fun()
{
    static int x = 0;

    x++;
    printf("%d\n", x);
}
```

---

## 7.2 Why do we use a static local variable?

The main feature is:

> A static local variable **retains its value between function calls**.

Example:

```c
#include <stdio.h>

void fun()
{
    static int x = 0;

    x++;
    printf("%d\n", x);
}

int main()
{
    fun();
    fun();
    fun();

    return 0;
}
```

Output:

```text
1
2
3
```

---

# 8. Static Local vs Normal Local

### Normal local variable

```c
void fun()
{
    int x = 0;

    x++;
    printf("%d ", x);
}
```

If called three times:

```text
1 1 1
```

The variable is recreated for each function invocation.

---

### Static local variable

```c
void fun()
{
    static int x = 0;

    x++;
    printf("%d ", x);
}
```

If called three times:

```text
1 2 3
```

The variable retains its value.

---

# 9. Scope of a Static Local Variable

A static local variable has **block scope**.

Example:

```c
void fun()
{
    static int x = 10;

    printf("%d", x);
}
```

`x` cannot be directly accessed from `main()`.

`static` does NOT make a local variable global.

---

# 10. Lifetime of a Static Local Variable

A static local variable has **static storage duration**.

Its lifetime is the **entire execution of the program**.

So remember:

```text
Static local:

Scope    -> Block
Lifetime -> Entire program
```

This is one of the biggest PE/PET traps.

---

# 11. Is a Static Local Initialized Every Time?

No.

It is initialized only once.

Example:

```c
void fun()
{
    static int x = 10;

    x++;
    printf("%d ", x);
}
```

Calling three times:

```text
11 12 13
```

Not:

```text
11 11 11
```

---

# 12. Default Value of a Static Variable

If a static variable is not explicitly initialized, it is initialized to zero.

Example:

```c
void fun()
{
    static int x;

    printf("%d", x);
}
```

Output:

```text
0
```

This applies to objects with static storage duration.

---

# 13. Can a Static Variable Be Modified?

Yes.

```c
static int x = 10;

x++;
x = 50;
```

`static` does NOT mean constant.

If you write:

```c
static const int x = 10;
```

then `const`, not `static`, is what prevents modification through the object.

---

# 14. Can `static` Be Used With Different Data Types?

Yes.

```c
static int x = 10;
static float f = 5.2;
static double d = 3.14;
static char ch = 'a';
```

`static` is a storage-class specifier, not a data type.

For example:

```c
static float x = 5.2;
```

means:

```text
static -> storage-class specifier
float  -> data type
x      -> variable
5.2    -> initializer
```

---

# 15. Can a Static Local Variable's Address Be Returned?

Yes.

This is an important difference from a normal local variable.

### Normal local — dangerous:

```c
int *fun()
{
    int x = 10;

    return &x;
}
```

After the function returns, `x`'s lifetime has ended.

Dereferencing the returned pointer has undefined behavior.

---

### Static local — valid:

```c
int *fun()
{
    static int x = 10;

    return &x;
}
```

`x` still exists after the function returns.

Therefore:

```c
int *p = fun();

printf("%d", *p);
```

can validly print:

```text
10
```

---

# 16. Static Global / File-Scope Variable

A file-scope variable declared with `static` is commonly called a static global variable.

Example:

```c
static int x = 10;

int main()
{
    printf("%d", x);
}
```

It has **internal linkage**.

---

# 17. What Does Internal Linkage Mean?

Internal linkage means that a name refers to the same entity only within the **same translation unit**.

Example:

```c
static int x = 10;
```

at file scope means that `x` is not available for direct linkage from another source file.

Think:

```text
file1.c / translation unit 1
    static int x = 10;
            |
            +-- usable here

file2.c / translation unit 2
            |
            +-- cannot refer to that x
```

---

# 18. What Is a Translation Unit?

A translation unit is the source code of a C file **after preprocessing**.

For example:

```text
main.c
  |
  | preprocessing
  | (#include, #define, etc.)
  v
translation unit
  |
  v
compiler
  |
  v
main.o
```

If a project has:

```text
main.c
calculator.c
display.c
```

then, conceptually, each is compiled as a separate translation unit:

```text
main.c       -> translation unit
calculator.c -> translation unit
display.c    -> translation unit
```

The resulting object files are then linked together.

---

# 19. Why Is Translation Unit Important for `static`?

Because a file-scope `static` object has **internal linkage**.

Example:

```c
/* file1.c */

static int x = 10;
```

`x` belongs to that translation unit for linkage purposes.

Another file cannot access that same `x` through external linkage.

---

# 20. Static Global + Another `.c` File

### file1.c

```c
static int x = 10;

void fun()
{
    printf("%d", x);
}
```

### file2.c

```c
void test()
{
    printf("%d", x);   // ERROR
}
```

The `x` in `file1.c` has internal linkage.

So `file2.c` cannot refer to it by that name.

---

# 21. What About `extern`?

Suppose:

### file1.c

```c
static int x = 10;
```

### file2.c

```c
extern int x;
```

Will this make `x` accessible?

**No.**

`extern` cannot make a file-scope `static` object externally accessible.

Why?

```text
static
  |
  v
internal linkage
  |
  v
same translation unit only
```

We will study `extern` separately next.

---

# 22. Static Global vs Static Local

| Property | Static Local | Static File-Scope |
|---|---|---|
| Declared | Inside block/function | Outside functions |
| Scope | Block | File |
| Lifetime | Entire program | Entire program |
| Retains value | Yes | Yes |
| Linkage | Not the same file-scope internal-linkage case | Internal linkage |
| Accessible from another `.c` file? | No | No |

The key difference is:

```text
static local
-> block scope

static file-scope
-> file scope + internal linkage
```

---

# 23. Static Function

A function can also be declared `static`.

Example:

```c
static void fun()
{
    printf("Hello");
}
```

A static function has **internal linkage**.

It can be called only from within the same translation unit.

---

# 24. Why Use a Static Function?

It is useful for helper functions that should remain private to one source file.

Example:

```c
/* calculator.c */

static int add(int a, int b)
{
    return a + b;
}
```

Other source files cannot directly link to this `add()` function.

---

# 25. Can `static` Be Used With an Ordinary Function Parameter?

No.

This is invalid:

```c
void fun(static int x)
{
}
```

For basic storage-class revision:

```text
static local variable  -> valid
static file-scope var  -> valid
static function        -> valid
static ordinary param  -> invalid
```

Note: `static` has a separate special meaning in array parameter declarations; that is a different C language feature.

---

# 26. Can Static Be Used Inside a Block?

Yes.

```c
void fun()
{
    if (1)
    {
        static int x = 10;

        printf("%d", x);
    }
}
```

`x` has block scope but static storage duration.

---

# 27. Can a Static Variable Be Initialized With a Non-Constant Value?

For an object with static storage duration, its initializer must satisfy the C rules for static initialization; an ordinary runtime variable or function call cannot be used as a normal static initializer.

### Valid:

```c
static int x = 10;
static int y = 5 + 3;
static float f = 5.2;
static char ch = 'a';
```

### Invalid example:

```c
int a = 10;

static int x = a;   // ERROR
```

`a` is a variable, not a constant expression suitable for this initialization.

Also:

```c
int get_value()
{
    return 10;
}

static int x = get_value();   // ERROR
```

The function would have to execute at runtime.

---

# 28. What Does "Non-Constant Value" Mean?

It does NOT mean:

```text
float
char
double
```

are non-constant.

These can be constant initializers:

```c
static float f = 5.2;
static char ch = 'a';
static double d = 3.14;
```

"Non-constant" here means a value that cannot be used as a required compile-time/static initializer, such as an ordinary variable's runtime value or a function call.

So:

```text
constant != integer only
non-constant != float/char
```

---

# 29. Does `static` Mean "Stored in RAM Forever"?

Do not use this as your technical definition.

The correct C concept is:

> A static object has **static storage duration**, meaning its lifetime extends throughout the execution of the program.

The exact physical memory/register placement is an implementation detail.

---

# 30. Does `static` Change the Scope of a Local Variable?

No.

Example:

```c
void fun()
{
    static int x = 10;
}
```

`x` still has block scope.

`static` changes its storage duration, not its local scope.

Remember:

```text
static local
scope    -> block
lifetime -> entire program
```

---

# 31. Does Static Global Mean "Accessible Everywhere"?

No.

This is a major trap.

```c
static int x = 10;
```

at file scope means:

```text
same translation unit -> accessible
different translation unit -> not accessible by external linkage
```

So "global" does NOT automatically mean "accessible from every `.c` file."

---

# 32. Four BIG STATIC Exam Traps

## Trap 1 — Static local scope

```c
void fun()
{
    static int x = 10;
}
```

Question: Does `static` make `x` global?

**No.**

```text
Scope    -> block
Lifetime -> entire program
```

---

## Trap 2 — Static default value

```c
static int x;
```

Default initial value:

```text
0
```

---

## Trap 3 — Static local retains value

```c
void fun()
{
    static int x = 0;
    x++;
    printf("%d ", x);
}
```

Three calls produce:

```text
1 2 3
```

not:

```text
1 1 1
```

---

## Trap 4 — Static global + `extern`

```c
/* file1.c */
static int x = 10;
```

```c
/* file2.c */
extern int x;
```

Can `file2.c` access the `static x`?

**No.**

Reason:

```text
static at file scope
        ↓
internal linkage
        ↓
same translation unit only
```

---

# 33. `static` Quick Revision Sheet

```text
STATIC
|
+-- Static Local Variable
|   |
|   +-- Scope -> Block
|   +-- Lifetime -> Entire program
|   +-- Retains value between function calls
|   +-- Initialized only once
|   +-- Default value -> 0
|
+-- Static File-Scope Variable
|   |
|   +-- File scope
|   +-- Lifetime -> Entire program
|   +-- Internal linkage
|   +-- Not accessible through external linkage from another TU
|
+-- Static Function
    |
    +-- Internal linkage
    +-- Usable for calls from the same translation unit
```

---

# 34. Scope vs Lifetime vs Linkage — Must Know

### Scope

**Where can I use the name in the source code?**

### Lifetime / Storage Duration

**How long does the object exist?**

### Linkage

**Can the same name refer to the same entity across different scopes/translation units?**

For the classic static local:

```c
static int x;
```

inside a function:

```text
Scope    -> Block
Lifetime -> Entire program
```

For a static file-scope variable:

```c
static int x;
```

outside functions:

```text
Scope    -> File
Lifetime -> Entire program
Linkage  -> Internal
```

---

# 35. Interview One-Liners

### `auto`

> `auto` gives a local variable automatic storage duration.

### `register`

> `register` requests that a variable be stored in a CPU register if possible, but the compiler is not required to honor the request.

### `static` local

> A static local variable has block scope and static storage duration, so it retains its value between function calls.

### `static` file-scope

> A file-scope static variable has internal linkage and is restricted to its translation unit.

### `static` function

> A static function has internal linkage and can be referred to only within its translation unit.

---

# 36. Final Comparison

| Feature | `auto` | `register` | `static` local | `static` file-scope |
|---|---|---|---|---|
| Scope | Block | Block | Block | File |
| Storage duration | Automatic | Automatic | Static | Static |
| Retains value between calls | No | No | Yes | Yes |
| Default initialization | Indeterminate if not initialized | Indeterminate if not initialized | 0 | 0 |
| Address with `&` | Yes | **No** | Yes | Yes |
| Internal linkage | No | No | No | **Yes** |

---

# 🎯 PE/PET Must-Remember Points

```text
1. auto -> automatic storage duration

2. register -> request for register storage

3. register variable -> address cannot be taken using &

4. register does NOT guarantee CPU-register storage

5. static local -> block scope

6. static local -> lifetime is entire program

7. static local -> retains value between function calls

8. static local -> initialized only once

9. static variable without initializer -> 0

10. static does NOT mean constant

11. static file-scope variable -> internal linkage

12. internal linkage -> same translation unit only

13. static function -> internal linkage

14. extern cannot make a file-scope static variable
    accessible from another translation unit

15. Translation unit -> source after preprocessing
```

---

# 🔥 Quick Memory Trick

```text
register
   ↓
& NOT allowed

static local
   ↓
BLOCK scope
   +
WHOLE PROGRAM lifetime

static global/file-scope
   ↓
FILE scope
   +
INTERNAL linkage
```

Next storage-class keyword to study: **`extern`**.
---

# 37. `extern` Storage Class

`extern` is a storage-class specifier used mainly to **declare an object or function whose definition is provided elsewhere**.

The most common use is sharing a global variable between different `.c` files.

Basic pattern:

```c
/* file1.c */
int num = 10;          // definition

/* file2.c */
extern int num;        // declaration, no new object
```

Both can refer to the same external object when the program is linked together.

---

# 38. What Does `extern int num;` Mean?

```c
extern int num;
```

Normally this is a **declaration**, not a definition.

It tells the compiler:

> "There is an `int` object named `num` with external linkage; its definition is provided elsewhere."

It does **not normally allocate a new `num`**.

Compare:

```c
int num = 10;       // definition
extern int num;     // declaration
```

Think:

```text
int num = 10;
     ↓
actual object exists

extern int num;
     ↓
refer to an existing object
```

---

# 39. `extern` Across Two `.c` Files

### file1.c

```c
#include <stdio.h>

int num;

int main(void)
{
    num++;
    func_1();

    return 0;
}
```

### file2.c

```c
#include <stdio.h>

extern int num;

int func_1(void)
{
    printf("num is %d from file2\n", num);
    return 0;
}
```

Here:

```text
file1.c                         file2.c

int num;                        extern int num;
   │                                  │
   └──────── same external object ────┘
```

There is only **one `num`**.

If `num` becomes `1` in `file1.c`, `file2.c` reads that same value.

---

# 40. `extern` Does NOT Create Another Variable

This:

```c
extern int num;
extern int num;
extern int num;
```

is allowed.

These are repeated declarations of the same external object.

It does NOT mean:

```text
num #1
num #2
num #3
```

There is still only one object.

Important contrast:

```c
int num = 10;
int num = 20;
```

is invalid because it gives the same object two actual definitions.

---

# 41. `extern` and Definitions

### Definition

```c
int num = 10;
```

This defines an object and gives it external linkage at file scope.

### Declaration only

```c
extern int num;
```

This declares an object; it is not the normal definition.

### `extern` with an initializer

```c
extern int num = 10;
```

The initializer makes this a **definition**, not a declaration-only `extern`.

For example:

```c
extern int num = 10;
```

is a definition with external linkage.

Some compilers, including GCC in common modes, may warn that an `extern` object is initialized. Do not use initialized `extern` as the normal way to share a variable.

---

# 42. Declaration vs Definition vs Tentative Definition

These three are extremely important.

### Definition

```c
int x = 10;
```

An actual definition with an initializer.

### Tentative definition

At file scope:

```c
int x;
```

with no initializer and no `extern` is a **tentative definition**.

Likewise:

```c
static int x;
```

at file scope is a tentative definition.

### Declaration only

```c
extern int x;
```

is not a tentative definition.

It is a declaration.

---

# 43. What Happens to a Tentative Definition?

If a translation unit contains tentative definitions for an object and no actual definition for that object in that translation unit, the tentative definition is treated as a definition at the end of the translation unit, with zero initialization.

Example:

```c
int x;
```

So `x` is ultimately defined with value:

```text
0
```

Do not confuse:

```c
int x;
```

with:

```c
extern int x;
```

The first is a tentative definition at file scope.

The second is only a declaration.

---

# 44. `int x;` vs `extern int x;`

```c
int x;
```

At file scope:

```text
tentative definition
external linkage
object is ultimately defined if no actual definition appears in that TU
```

```c
extern int x;
```

At file scope:

```text
declaration
external linkage
does not itself provide the normal object definition
```

This distinction is a common PE/PET trap.

---

# 45. Multiple Tentative Definitions

This is valid in one translation unit:

```c
int x;
int x;
int x;
```

They are tentative definitions referring to the same externally linked object.

If there is no actual definition in that translation unit, the object is ultimately defined once with value zero.

Similarly:

```c
static int x;
static int x;
```

is valid.

Both are tentative definitions of the same internally linked object.

---

# 46. Multiple Definitions Are Different

This is invalid:

```c
int x = 10;
int x = 20;
```

There are two actual definitions of the same object.

But:

```c
int x = 10;
int x;
```

is valid in the same translation unit.

Why?

```text
int x = 10;  -> actual definition
int x;       -> tentative definition
```

The tentative definition does not create a second object.

---

# 47. Linkage — Must Know Before `extern`

Linkage answers:

> Can an identifier refer to the same entity across different scopes or translation units?

The main linkage categories relevant here are:

```text
external linkage
internal linkage
no linkage
```

### External linkage

A file-scope non-static object/function normally has external linkage.

```c
int x;
```

Other translation units can refer to it with a compatible `extern` declaration.

### Internal linkage

A file-scope `static` object/function has internal linkage.

```c
static int x;
```

Only the same translation unit can refer to that entity.

### No linkage

An ordinary local variable normally has no linkage.

```c
void fun(void)
{
    int x;
}
```

That `x` is local to its block and has no linkage.

---

# 48. Scope vs Storage Duration vs Linkage

Do not mix these three concepts.

### Scope

> Where can I use the name in the source code?

### Storage duration / lifetime

> How long does the object exist?

### Linkage

> Can declarations in different scopes/translation units refer to the same entity?

Example:

```c
static int x = 10;
```

at file scope:

```text
Scope            -> file
Storage duration -> entire program
Linkage          -> internal
```

Example:

```c
void fun(void)
{
    static int x = 10;
}
```

```text
Scope            -> block
Storage duration -> entire program
Linkage          -> no linkage
```

The keyword `static` does not mean the same linkage in every context.

---

# 49. What Is a Translation Unit?

A translation unit is the source file after preprocessing.

Conceptually:

```text
source.c
   |
   | preprocessing
   | (#include, macros, conditional compilation...)
   v
translation unit
   |
   v
compiler
   |
   v
object file
```

If a project has:

```text
file1.c
file2.c
file3.c
```

then each is normally compiled as a separate translation unit.

The object files are then linked.

This matters greatly for `extern`.

---

# 50. `extern` Across Translation Units

Example:

```c
/* file1.c */
int num = 20;
```

```c
/* file2.c */
extern int num;
```

`file2.c` can refer to the external object defined in `file1.c`.

There is one `num`.

```text
file1.c                       file2.c
int num = 20;                 extern int num;
     │                             │
     └──────── same object ────────┘
```

If no matching definition exists anywhere, the program may compile individual files but normally fails at link time with an error such as:

```text
undefined reference to `num'
```

---

# 51. Why Can an `extern` Type Mismatch Sometimes Compile?

Consider:

```c
/* file1.c */
int num;
```

```c
/* file2.c */
extern char num;
```

These declarations describe the same externally linked object but use incompatible types.

This is **not a valid way to declare the object**.

However, because `file1.c` and `file2.c` are separate translation units, the compiler compiling `file2.c` may not see the `int num` declaration from `file1.c`.

Therefore:

```text
compiler for file1.c -> sees int num
compiler for file2.c -> sees extern char num
linker                 -> may still resolve the symbol name
```

A particular compiler/linker may therefore build an executable and produce output.

That output does **not** make the program correct. The declarations for the same external object are incompatible, so the behavior is not something you can rely on.

---

# 52. Conflicting Types in the Same Translation Unit

Now compare:

```c
extern int num;
extern char num;
```

Both declarations are visible in the **same translation unit**.

They refer to the same externally linked object but have incompatible types.

Therefore the compiler can diagnose:

```text
conflicting types for 'num'
```

So:

```text
Different translation units:
int num;  +  extern char num;
    -> mismatch may escape compile-time checking

Same translation unit:
extern int num;
extern char num;
    -> compiler can see both -> diagnostic
```

This is a very important objective-question distinction.

---

# 53. `extern` and `static` — The Most Important Linkage Trap

At file scope:

```c
static int num;
extern int num;
```

This is valid.

Why?

The first declaration creates an internally linked `num`.

The later `extern int num;` can refer to the already-visible `num`, so it refers to the same entity with internal linkage.

There are not two variables.

---

# 54. Reverse Order: `extern` Then `static`

At file scope:

```c
extern int num;
static int num;
```

This is invalid.

The first declaration has external linkage.

The later `static` declaration attempts to give the identifier internal linkage.

That is a linkage disagreement.

Typical diagnostic:

```text
static declaration of 'num' follows non-static declaration
```

Remember:

```text
static -> extern    ✅ can refer to the visible static object

extern -> static    ❌ linkage disagreement
```

This rule applies when the declarations are in the same translation unit and are declarations of the same identifier.

---

# 55. Plain `int` and `static` at File Scope

These are also incompatible in the same translation unit:

```c
int num;
static int num;
```

and:

```c
static int num;
int num;
```

Why?

```text
int num;        -> external linkage
static int num; -> internal linkage
```

The same identifier cannot be given these conflicting linkages in one translation unit.

So both orders are invalid.

---

# 56. `static int num; static int num;`

This is valid:

```c
static int num;
static int num;
```

Both are tentative definitions of the same internally linked object.

There is only one `num`.

At the end of the translation unit, if there is no actual definition, it is defined with value zero.

---

# 57. `extern int num; extern int num;`

This is also valid:

```c
extern int num;
extern int num;
```

They are repeated declarations of the same external object.

No second object is created.

---

# 58. `extern` Can Refer to a Previously Visible Declaration

This is one of the most important rules.

When a block-scope `extern` declaration is encountered, a visible previous declaration with linkage can determine the linkage of the `extern` declaration.

Example:

```c
static int x = 10;

void fun(void)
{
    extern int x;
    printf("%d\n", x);
}
```

The `extern int x;` can refer to the already-visible file-scope static `x`.

It does not magically turn that object into external linkage.

The `x` remains the same internally linked object.

---

# 59. Why `static` + `extern` Works in One Order

```c
static int x = 10;
extern int x;
```

At the `extern` line, the previous `static x` is visible and has internal linkage.

Therefore the `extern` declaration refers to that same entity.

Think:

```text
static int x = 10;
        |
        v
internal linkage
        |
        v
extern int x;
        |
        v
same x
```

---

# 60. Why `extern` + `static` Does Not Work in the Reverse Order

```c
extern int x;
static int x;
```

At the first line there is no previous declaration of `x` with linkage to reuse.

So the `extern x` has external linkage.

Then:

```c
static int x;
```

tries to give the same identifier internal linkage.

Result:

```text
external linkage
       +
internal linkage
       =
linkage disagreement
```

---

# 61. Very Important: A Local Variable Can Hide a File-Scope `static`

Consider:

```c
static int x = 20;

int main(void)
{
    int x = 10;

    {
        extern int x;
        printf("%d\n", x);
    }
}
```

The local:

```c
int x = 10;
```

has **no linkage** and hides the file-scope `static x` at that point.

Therefore the block-scope `extern int x;` does not reuse that local variable as an externally linked object.

Because no visible declaration with linkage is available at that point, the `extern x` has external linkage.

But the translation unit already contains the file-scope `static x` with internal linkage.

This produces a linkage conflict/undefined behavior under the C linkage rules. Do not treat the local `x` as the global static `x`.

This is why the slide examples with nested local `x` declarations are tricky.

---

# 62. A Normal Global `int x` and a Block-Scope `extern`

This case is valid:

```c
int x = 20;

int main(void)
{
    int x = 10;

    {
        extern int x;
        printf("%d\n", x);
    }
}
```

The file-scope `x` has external linkage.

The block-scope `extern int x;` refers to the external `x`, so the first print is:

```text
20
```

After leaving the inner block, the visible local is:

```c
int x = 10;
```

so the next print is:

```text
10
```

If an outer local:

```c
int x;
```

was never initialized and is later printed, its value is indeterminate and the result is not predictable.

---

# 63. Block-Scope `extern` Cannot Have an Initializer

This is invalid:

```c
void fun(void)
{
    extern int x = 20;   // ERROR
}
```

A block-scope `extern` declaration cannot have an initializer.

Compare:

```c
void fun(void)
{
    extern int x;        // valid declaration
}
```

At file scope:

```c
extern int x = 20;
```

is different: the initializer makes it a **definition**.

So scope matters.

---

# 64. `extern` Does Not Mean `const`

`extern` does not make an object read-only.

Example:

```c
/* file1.c */
int x = 10;
```

```c
/* file2.c */
extern int x;

void fun(void)
{
    x = 50;
}
```

The same external object can be modified.

If you want read-only access, `const` is a separate qualifier:

```c
extern const int x;
```

---

# 65. `extern` Does Not Mean "Copy"

This:

```c
extern int x;
```

does not create a copy of the object.

It refers to the existing object.

If one file changes it:

```c
x++;
```

another file referring to the same object sees the changed value.

---

# 66. `extern` and Functions

Functions can also be declared with `extern`:

```c
extern int func(void);
```

But it is usually unnecessary because a non-static function declaration normally has external linkage by default.

For example:

```c
int func(void);
```

already declares an externally linked function.

A `static` function is different:

```c
static int func(void);
```

It has internal linkage and is restricted to its translation unit.

---

# 67. `static` Function vs `extern` Function

### Static function

```c
/* file2.c */
static int func_2(void)
{
    return 10;
}
```

Only `file2.c` can directly refer to `func_2`.

### Normal function

```c
/* file2.c */
int func_1(void)
{
    return 10;
}
```

Another translation unit can call `func_1` using a compatible declaration.

So:

```text
static function -> internal linkage -> same TU only

normal function -> external linkage -> can be used from another TU
```

---

# 68. Static Function Example

### file2.c

```c
extern int num;

static int func_2(void)
{
    printf("num is %d from file2\n", num);
    return 0;
}

int func_1(void)
{
    func_2();
    return 0;
}
```

Here:

```text
file1.c
   |
   | calls func_1
   v
func_1()        -> external linkage
   |
   | same translation unit
   v
func_2()        -> static/internal linkage
```

This is valid.

`func_1()` acts as the externally accessible function, while `func_2()` remains a private helper.

---

# 69. Another Static Function Trap

Suppose:

```c
/* file1.c */
int main(void)
{
    func_2();
}
```

and:

```c
/* file2.c */
static int func_2(void)
{
}
```

`func_2` has internal linkage in `file2.c`.

Therefore `file1.c` cannot directly link to that function.

A typical build can fail at link time with an error such as:

```text
undefined reference to `func_2'
```

The compiler compiling `file1.c` may also require a prior declaration in modern C.

---

# 70. `extern` + Same Type vs Different Type

Correct:

```c
/* file1.c */
int num;

/* file2.c */
extern int num;
```

Compatible declarations:

```text
int <-> int
```

Incorrect:

```c
/* file1.c */
int num;

/* file2.c */
extern char num;
```

Incompatible declarations:

```text
int <-> char
```

Do not rely on a successful build or printed output from a particular compiler.

---

# 71. Same Translation Unit Type Mismatch

This is immediately diagnosable:

```c
extern int num;
extern char num;
```

The compiler sees:

```text
num -> int
num -> char
```

and reports a conflicting-type diagnostic.

---

# 72. Different Translation Unit Type Mismatch

This may escape compile-time checking:

```c
/* file1.c */
int num;
```

```c
/* file2.c */
extern char num;
```

Each file can be compiled separately because each compiler invocation sees only its own declarations.

A linker may resolve the same symbol name and produce an executable.

But the declarations are incompatible, so the program is not valid to rely on.

This explains why an apparently "wrong" `extern` example can sometimes compile and print a value.

---

# 73. `0x31` Example — Another Type-Mismatch Trap

Consider:

```c
#include <stdio.h>

int main(void)
{
    extern char x;

    printf("x %c\n", x);

    return 0;
}

int x = 0x31;
```

Both declarations are in the same translation unit:

```text
extern char x; -> char
int x = 0x31;  -> int
```

Therefore they are incompatible declarations of the same external object.

The program is not valid C to rely on and the compiler should diagnose the conflicting declarations.

Do not answer this by simply saying:

```text
x 1
```

because `0x31` being the ASCII code for `'1'` does not fix the incompatible declarations.

---

# 74. Why the Previous `file1.c` / `file2.c` Example Could Print

Example:

```c
/* file1.c */
int num;

int main(void)
{
    while (1)
    {
        num++;
        func_1();
    }
}
```

```c
/* file2.c */
extern char num;

int func_1(void)
{
    printf("num is %d from file2\n", num);
    return 0;
}
```

It may compile and run on a particular implementation because the incompatible declarations are in separate translation units.

But:

```text
int num
      vs
char num
```

is still an incompatible declaration of the same external object.

**Observed output is not proof that the declaration is valid.**

---

# 75. `extern` With No Definition

Example:

```c
extern int x;

int main(void)
{
    printf("%d\n", x);
}
```

If there is no definition of `x` anywhere in the program, the source file can compile, but linking normally fails.

Typical message:

```text
undefined reference to `x'
```

So remember:

```text
compile -> may succeed
link    -> fails if required definition is missing
```

---

# 76. `extern` Does Not Make a Static Global Public

Suppose:

```c
/* file1.c */
static int x = 10;
```

and:

```c
/* file2.c */
extern int x;
```

The `static x` has internal linkage.

`extern` in another translation unit cannot turn it into an externally linked object.

So `file2.c` cannot use that particular `static x` through external linkage.

Correct approach if another file needs access:

```c
/* file1.c */
int x = 10;
```

or provide a non-static interface function.

---

# 77. The Critical Order Examples

Memorize these:

### A

```c
static int x;
extern int x;
```

```text
static -> internal
extern -> refers to existing static x
RESULT: valid
```

### B

```c
extern int x;
static int x;
```

```text
extern -> external
static -> internal
RESULT: linkage disagreement
```

### C

```c
int x;
static int x;
```

```text
int -> external
static -> internal
RESULT: linkage disagreement
```

### D

```c
static int x;
int x;
```

```text
static -> internal
int -> external
RESULT: linkage disagreement
```

### E

```c
static int x;
static int x;
```

```text
both -> internal
both tentative definitions
RESULT: valid
```

### F

```c
int x;
int x;
```

```text
both -> external
both tentative definitions
RESULT: valid
```

### G

```c
extern int x;
extern int x;
```

```text
both -> external declarations
RESULT: valid
```

---

# 78. One Rule Is NOT Enough — Check Three Things

For tricky `extern` questions, do not use only:

> "same linkage = correct."

Instead check these three things:

### 1. Are they referring to the same entity?

Scope and previous visible declarations matter.

### 2. Is the linkage compatible?

```text
internal vs external -> conflict
same compatible linkage -> potentially okay
```

### 3. Are there multiple actual definitions?

For example:

```c
int x = 10;
int x = 20;
```

Both have external linkage, but there are two actual definitions.

Therefore:

```text
same linkage does NOT automatically mean valid.
```

---

# 79. The "Previous Visible Declaration" Mental Model

When you see:

```c
extern int x;
```

especially at block scope, ask:

> "At this exact point, is there a previous visible declaration of `x` that has linkage?"

If yes, the `extern` can refer to that entity and use its linkage.

If the visible `x` is only an ordinary local variable with **no linkage**, it does not provide linkage for the `extern`.

If no visible declaration with linkage is available, the block-scope `extern` declaration has external linkage.

This is why **scope/hiding** matters.

---

# 80. Example: Local `x` Does Not Automatically Become the `extern x`

```c
int x = 20;

int main(void)
{
    int x = 10;

    {
        extern int x;
        printf("%d\n", x);
    }
}
```

The local `x = 10` has no linkage.

The `extern x` therefore refers to the external file-scope `x = 20`.

First print:

```text
20
```

After leaving the inner block:

```c
printf("%d\n", x);
```

the visible local is again:

```c
int x = 10;
```

so it prints:

```text
10
```

---

# 81. `extern` and Scope

A useful mental picture:

```text
FILE SCOPE
int x = 20;
     |
     | can have external linkage
     |
main()
{
    int x = 10;       <- hides file-scope x
    {
        extern int x; <- special external declaration
    }
}
```

A name being visible and an object having linkage are different ideas.

**Scope tells you what declaration is visible. Linkage tells you whether declarations can refer to the same entity.**

---

# 82. `extern` Quick Comparison Table

| Declaration | Meaning |
|---|---|
| `int x = 10;` | Definition |
| `int x;` at file scope | Tentative definition |
| `extern int x;` | Declaration |
| `extern int x = 10;` at file scope | Definition |
| `static int x = 10;` at file scope | Definition with internal linkage |
| `static int x;` at file scope | Tentative definition with internal linkage |
| `extern char x;` when object is actually `int x` | Incompatible declaration |

---

# 83. `extern` Quick Exam Table

| Situation | Result |
|---|---|
| `int x;` in file1 + `extern int x;` in file2 | Valid sharing pattern |
| `extern int x;` repeated | Valid |
| `int x;` repeated at file scope | Valid tentative definitions |
| `static int x;` repeated | Valid tentative definitions |
| `int x = 10;` + `int x;` | Valid |
| `int x = 10;` + `int x = 20;` | Invalid: multiple definitions |
| `static int x;` + `extern int x;` same TU | Valid: extern can refer to visible static x |
| `extern int x;` + `static int x;` same TU | Invalid: linkage disagreement |
| `int x;` + `static int x;` same TU | Invalid: linkage disagreement |
| `static int x;` + `int x;` same TU | Invalid: linkage disagreement |
| `extern int x;` + `extern char x;` same TU | Invalid: conflicting types |
| `int x` in file1 + `extern char x` in file2 | Incompatible; may compile/link but cannot be relied on |
| `extern int x;` with no definition | Usually link error when used |
| block-scope `extern int x = 20;` | Invalid |
| file-scope `extern int x = 20;` | Definition |

---

# 84. Output-Tracing Example — `extern` Across Files

### file1.c

```c
int num;

int main(void)
{
    num++;
    func_1();

    return 0;
}
```

### file2.c

```c
extern int num;

int func_1(void)
{
    printf("%d\n", num);
    return 0;
}
```

Initial value of file-scope `num`:

```text
0
```

After:

```c
num++;
```

it becomes:

```text
1
```

So `func_1()` prints:

```text
1
```

Both files are accessing the same object.

---

# 85. Output-Tracing Example — Two Different `num`s

### file1.c

```c
int num;
```

### file2.c

```c
static int num;
extern int num;

int func_1(void)
{
    printf("%d\n", num);
    return 0;
}
```

The `extern int num;` follows a visible `static int num;`.

Therefore it refers to the **file2.c static `num`**, not the `num` from file1.c.

So there are two different objects:

```text
file1.c -> external num
file2.c -> internal num
```

Both start at zero if not explicitly initialized.

---

# 86. Static Function and `extern` — Combined Example

### file1.c

```c
int num;

int main(void)
{
    num++;
    func_1();
    return 0;
}
```

### file2.c

```c
extern int num;

static int func_2(void)
{
    printf("num is %d from file2\n", num);
    return 0;
}

int func_1(void)
{
    func_2();
    return 0;
}
```

This works conceptually as:

```text
file1.c
  |
  +--> func_1()  [external linkage]
                    |
                    +--> func_2() [internal linkage]
```

`func_2()` is private to file2.c.

---

# 87. Common Mistakes

### Mistake 1

> "`extern` creates a new variable."

Usually false.

```c
extern int x;
```

is normally a declaration of an existing object.

### Mistake 2

> "`static` always means internal linkage."

Not for a local static variable.

```c
void fun(void)
{
    static int x;
}
```

has block scope and no linkage.

File-scope `static` has internal linkage.

### Mistake 3

> "If it compiled, it must be valid."

Not necessarily.

Separate translation units can hide incompatible declarations from the compiler.

### Mistake 4

> "`int x;` and `extern int x;` are the same."

No.

At file scope:

```text
int x;        -> tentative definition
extern int x; -> declaration
```

### Mistake 5

> "Same linkage always means valid."

No.

Two actual definitions can still be invalid.

```c
int x = 10;
int x = 20;
```

### Mistake 6

> "`extern` can access a static variable from another `.c` file."

No.

File-scope `static` means internal linkage.

---

# 88. PE/PET High-Value MCQs

### Q1

```c
extern int x;
extern int x;
```

A. Two variables  
B. One variable, two declarations  
C. Compilation error  
D. Linker error

**Answer: B**

---

### Q2

```c
static int x;
static int x;
```

A. Error  
B. Two variables  
C. One internally linked object with repeated tentative definitions  
D. Linker error

**Answer: C**

---

### Q3

```c
extern int x;
static int x;
```

A. Valid  
B. Linkage disagreement  
C. Two variables  
D. Only linker warning

**Answer: B**

---

### Q4

```c
static int x;
extern int x;
```

A. Always two variables  
B. Linkage disagreement  
C. Valid; extern can refer to the visible static object  
D. Linker error

**Answer: C**

---

### Q5

```c
extern int x;
extern char x;
```

A. Valid  
B. Conflicting types  
C. Two variables  
D. No declaration

**Answer: B**

---

### Q6

```c
/* file1.c */
int x;

/* file2.c */
extern char x;
```

What is the best statement?

A. Guaranteed compile-time error  
B. Guaranteed correct program  
C. Incompatible declarations; a particular compiler may still build it  
D. Creates two x variables

**Answer: C**

---

### Q7

```c
void fun(void)
{
    extern int x = 10;
}
```

A. Valid  
B. Block-scope extern with initializer is invalid  
C. Creates a local x  
D. Creates a static local

**Answer: B**

---

### Q8

At file scope:

```c
int x;
```

is:

A. Only a declaration  
B. A tentative definition  
C. An automatic variable  
D. An `extern` declaration

**Answer: B**

---

### Q9

What does `extern` mainly do?

A. Makes a variable constant  
B. Requests CPU register storage  
C. Declares an object/function whose definition is provided elsewhere  
D. Makes a local variable static

**Answer: C**

---

### Q10

Which storage-class specifier gives a file-scope object internal linkage?

A. auto  
B. register  
C. static  
D. extern

**Answer: C**

---

# 89. Tricky Order-Based MCQs

### Q11

```c
static int x;
extern int x;
```

Result?

**Valid.**

Reason: `extern` can refer to the previously visible internally linked `x`.

### Q12

```c
extern int x;
static int x;
```

Result?

**Linkage disagreement.**

### Q13

```c
int x;
static int x;
```

Result?

**Linkage disagreement.**

### Q14

```c
static int x;
int x;
```

Result?

**Linkage disagreement.**

### Q15

```c
int x;
int x;
```

Result?

**Valid tentative definitions.**

### Q16

```c
static int x;
static int x;
```

Result?

**Valid tentative definitions.**

---

# 90. The 10 Rules You Should Memorize

```text
1. extern int x;
   -> declaration, normally no new object

2. int x;
   -> file-scope tentative definition

3. int x = 10;
   -> definition

4. extern int x = 10;
   -> definition because initializer is present

5. static at file scope
   -> internal linkage

6. static local
   -> block scope + static storage duration + no linkage

7. static int x; + extern int x;
   -> valid in same TU when extern refers to visible static x

8. extern int x; + static int x;
   -> linkage disagreement in same TU

9. Same external object declared with incompatible types
   -> invalid; same-TU cases can be diagnosed directly

10. Different TUs can hide a type mismatch from the compiler
    -> a program may build and run, but that does not make it valid
```

---

# 91. Final Mental Model

When you see an `extern` question, ask these questions **in this order**:

```text
1. Where is the declaration?
   -> file scope or block scope?

2. What x is visible at that exact point?
   -> check scope and hiding.

3. Does that visible declaration have linkage?
   -> internal / external / no linkage.

4. What linkage does the extern declaration have?

5. Are the types compatible?

6. Is this a declaration, tentative definition, or actual definition?

7. Are there multiple actual definitions?

8. Are the declarations in the same translation unit or different TUs?

9. If different TUs, remember that the compiler may not see
   the mismatch while compiling each file separately.

10. Only after all of this, determine:
    compile error / link error / valid / undefined behavior.
```

---

# 92. One-Page `extern` Cheat Sheet

```text
                    extern
                       |
                       v
              usually declaration
                       |
                       v
          "object/function defined elsewhere"
                       |
        +--------------+--------------+
        |                             |
      object                       function
        |                             |
   extern int x;              extern int fun(void);
        |
        v
   no new object normally


FILE SCOPE
----------

int x;              -> tentative definition
int x = 10;         -> definition
extern int x;       -> declaration
extern int x = 10;  -> definition
static int x;       -> tentative definition + internal linkage


LINKAGE
-------

static at file scope -> internal linkage
normal file-scope x  -> external linkage
ordinary local x     -> no linkage

extern
  |
  +-- can refer to a visible declaration with linkage
  |
  +-- otherwise commonly gives external linkage


BIG TRAPS
---------

static int x;
extern int x;
-> VALID

extern int x;
static int x;
-> LINKAGE DISAGREEMENT

int x;
static int x;
-> LINKAGE DISAGREEMENT

static int x;
static int x;
-> VALID

int x;
int x;
-> VALID tentative definitions

extern int x;
extern int x;
-> VALID repeated declarations

extern int x;
extern char x;
-> CONFLICTING TYPES

file1: int x;
file2: extern char x;
-> incompatible declarations; may build, not valid to rely on

block:
extern int x = 10;
-> ERROR

file scope:
extern int x = 10;
-> definition
```

---

# 93. Interview One-Liners for `extern`

### What is `extern`?

> `extern` is a storage-class specifier commonly used to declare an object or function whose definition is provided elsewhere, often in another translation unit.

### Does `extern int x;` create a variable?

> Normally no. It is a declaration of an existing object.

### What is `int x;` at file scope?

> A tentative definition.

### What is `extern int x = 10;`?

> The initializer makes it a definition rather than a declaration-only `extern`.

### Can `extern` access a file-scope static variable from another `.c` file?

> No. File-scope `static` gives internal linkage.

### What is the difference between `static` and `extern`?

> File-scope `static` gives internal linkage, while `extern` is commonly used to refer to an externally linked definition.

### Why can an incompatible `extern` declaration sometimes compile?

> Because separate translation units are compiled separately, so the compiler may not see the other declaration. The resulting program is still not something you can rely on.

---

# 94. Final Storage-Class Revision Card

```text
auto
  -> ordinary local variable
  -> automatic storage duration
  -> block scope
  -> uninitialized value is indeterminate

register
  -> request for register storage
  -> automatic storage duration for local variables
  -> address cannot be taken with &
  -> compiler not required to use a CPU register

static local
  -> block scope
  -> static storage duration
  -> retains value between calls
  -> initialized once
  -> default 0
  -> no linkage

static file-scope
  -> file scope
  -> static storage duration
  -> internal linkage
  -> private to the translation unit

static function
  -> internal linkage
  -> private to the translation unit

extern
  -> usually a declaration
  -> commonly refers to an externally linked definition
  -> does not normally create a new object
  -> type must be compatible with the actual object
  -> missing definition -> usually link error
  -> initialized extern -> definition
  -> block-scope extern cannot have initializer
```

---

# 95. Highest-Priority PE/PET Traps

```text
register + &x
        -> ERROR

static local
        -> block scope, whole-program lifetime

static file-scope
        -> internal linkage

static function
        -> internal linkage

int x; at file scope
        -> tentative definition

extern int x;
        -> declaration

extern int x = 10;
        -> definition

static int x;
extern int x;
        -> VALID

extern int x;
static int x;
        -> LINKAGE DISAGREEMENT

int x;
static int x;
        -> LINKAGE DISAGREEMENT

static int x;
static int x;
        -> VALID

int x;
int x;
        -> VALID tentative definitions

extern int x;
extern int x;
        -> VALID repeated declarations

extern int x;
extern char x;
        -> CONFLICTING TYPES

different TUs + incompatible extern type
        -> may compile/link on a particular implementation,
           but do not treat the program as valid

same TU + incompatible declarations
        -> compiler can diagnose the conflict
```
