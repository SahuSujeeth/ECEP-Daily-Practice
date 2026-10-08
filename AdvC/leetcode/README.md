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