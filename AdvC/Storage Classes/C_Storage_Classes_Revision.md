# C Storage Classes — Revision Notes

This README contains revision notes for the C storage-class keywords discussed so far:

- `auto`
- `register`
- `static`

`extern` will be added separately after completing its revision.

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
