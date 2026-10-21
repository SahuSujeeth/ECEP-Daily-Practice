# LeetCode Practice in C

One problem a day, solved in C, grouped by pattern.

---

## Plan

### Warm-up

| # | Problem | Status |
|---|---------|--------|
| 1 | Two Sum | Done |
| 28 | Find the Index of the First Occurrence in a String | Done |
| 9 | Palindrome Number | To do |

### Pattern 1: Running Total (Prefix Sum)

| # | Problem | Status |
|---|---------|--------|
| 1480 | Running Sum of 1d Array | Done |
| 1732 | Find the Highest Altitude | Done |
| 724 | Find Pivot Index | Done |

### Pattern 2: Two Pointers

| # | Problem | Status |
|---|---------|--------|
| 344 | Reverse String | To do |
| 125 | Valid Palindrome | To do |
| 283 | Move Zeroes | To do |
| 26 | Remove Duplicates from Sorted Array | To do |

### Pattern 3: Counting (Frequency Array)

| # | Problem | Status |
|---|---------|--------|
| 242 | Valid Anagram | To do |
| 217 | Contains Duplicate | To do |
| 387 | First Unique Character in a String | To do |

### Pattern 4: Bit Tricks

| # | Problem | Status |
|---|---------|--------|
| 136 | Single Number | To do |
| 191 | Number of 1 Bits | To do |
| 231 | Power of Two | To do |
| 338 | Counting Bits | To do |

### Pattern 5: Binary Search

| # | Problem | Status |
|---|---------|--------|
| 704 | Binary Search | To do |
| 35 | Search Insert Position | To do |
| 69 | Sqrt(x) | To do |

### Pattern 6: Linked List

| # | Problem | Status |
|---|---------|--------|
| 206 | Reverse Linked List | To do |
| 876 | Middle of the Linked List | To do |
| 141 | Linked List Cycle | To do |
| 21 | Merge Two Sorted Lists | To do |

### Pattern 7: Stack

| # | Problem | Status |
|---|---------|--------|
| 20 | Valid Parentheses | To do |

---

## Notes

### 1 - Two Sum
- Pattern: Look for a partner.
- Trick: For each number, check the numbers after it.
- Time: O(n^2). Space: O(1).
- Memory rule: if I return the memory, the caller frees it. If not, I free it.

### 28 - strStr
- Pattern: Try each start position and compare.
- Trick: The outer loop only needs to go up to `haystack_length - needle_length`.
- Time: O(n x m). Space: O(1).

### 1480 - Running Sum of 1d Array
- Pattern: Running total.
- Trick: Keep a `sum` variable and store it in the result at each step.
- Time: O(n). Space: O(n) for the result array.
- Mistake: I forgot to set `*returnSize`. LeetCode printed an empty array. The caller reads `returnSize` to know the length of my answer.

### 1732 - Find the Highest Altitude
- Pattern: Running total.
- Trick: Keep a running sum and track the maximum. No array is needed.
- Time: O(n). Space: O(1).

### 724 - Find Pivot Index
- Pattern: Running total.
- Trick: Find the total first. Then right sum = total - left sum - current number.
- Time: O(n). Space: O(1).

### 344 - Reverse String
- Pattern: Two pointers.
- Trick: One pointer at each end. Swap, then move both toward the middle until they meet.
- Time: O(n). Space: O(1).

### 125 - Valid Palindrome
- Pattern: Two ends compare (clean copy).
- Trick: Keep only letters and numbers in lowercase, then compare from both ends.
- Time: O(n). Space: O(n).
- Memory rule: I do not return the copy, so I free it.

### 283 - Move Zeroes
- Pattern: Two pointers (slow and fast).
- Trick: The fast pointer walks the array. The slow pointer marks where the next non-zero goes. Swap when the fast pointer finds a non-zero.
- Time: O(n). Space: O(1).

### 26 - Remove Duplicates from Sorted Array
- Pattern: Two pointers (slow and fast).
- Trick: The array is sorted, so duplicates are next to each other. The slow pointer marks the last unique number. Copy a number forward only when it is different.
- Time: O(n). Space: O(1).

### 242 - Valid Anagram
- Pattern: Counting (frequency array).
- Trick: Use 26 boxes, one for each letter. Add 1 for each letter of `s`, subtract 1 for each letter of `t`. If every box is 0, it is an anagram. The box for a letter is `ch - 'a'`.
- Time: O(n). Space: O(1).
- Mistake 1: I first sorted both strings. It is correct, but it is O(n^2), and LeetCode gave Time Limit Exceeded.
- Mistake 2: I used `s[i]` in both the add line and the subtract line. They cancelled out, so the answer was always `true`. The subtract line must use `t[i]`.

### 387 - First Unique Character in a String
- Pattern: Counting (frequency array).
- Trick: First pass: count every letter in 26 boxes. Second pass: walk the string in order and return the first index whose count is 1.
- Time: O(n). Space: O(1).
- Mistake: I used `char` for the count boxes. A `char` can overflow on long strings. Use `int`.

### 136 - Single Number
- Pattern: Bit tricks (XOR).
- Trick: A number XOR itself is 0, and a number XOR 0 stays the same. XOR all the numbers together. Every pair cancels out, and only the single number is left.
- Time: O(n). Space: O(1).
- Clue: "Every number appears twice except one," and the O(1) space rule.

### 191 - Number of 1 Bits
- Pattern: Bit tricks (bit mask).
- Trick: Make a mask with only bit `i` on (`1u << i`). Then `n & mask` is non-zero only if bit `i` of `n` is 1. Check all 32 positions and count.
- Time: O(1), because the loop always runs 32 times. Space: O(1).
- Note: Use `unsigned int mask = 1u << i`. A plain `1 << 31` shifts into the sign bit of a signed `int`, which is undefined behavior in C.
- Clue: The problem asks to count the 1 bits in the binary form of a number.

### 231 - Power of Two
- Pattern: Bit tricks (power of two has exactly one 1 bit).
- Trick: My solution divided by 2 until I reached 1, and returned false if I met an odd number. The bit way is `n > 0 && (n & (n - 1)) == 0`, because `n - 1` removes the lowest 1 bit.
- Time: O(log n) for my division loop, O(1) for the bit way. Space: O(1).
- Mistake: For `n = 0`, my loop ran forever, because `0 / 2` is still 0. I fixed it with `if (n <= 0) return false;`.
- Clue: The question asks if a number is a power of two, so the binary form has only one 1 bit.

### 338 - Counting Bits
- Pattern: Bit tricks (bit mask).
- Trick: For every number `i` from 0 to `n`, check all 32 bits with `i & (1u << j)` and count the 1s. Save each count in the result array.
- Time: O(32 x n), which is O(n). Space: O(n) for the result array.
- Mistake: I wrote `malloc(sizeof(n + 1))`. That gives only 4 bytes, so my loop wrote past the end of the array. The right way is `malloc((n + 1) * sizeof(int))`.
- Clue: The question asks for the count of 1 bits for every number from 0 to `n`.

### 326 - Power of Three
- Pattern: Bit tricks / number checks (same idea as Power of Two).
- Trick: A power of three can be divided by 3 again and again until it reaches 1. If `n` is zero or negative, return false. If I meet a number that is not divisible by 3 before reaching 1, return false.
- Time: O(log n). Space: O(1).
- Clue: The question asks if a number is a power of a base, so keep dividing by that base.

