# Longest Palindromic Subsequence with Maximum Count

## Problem Description

Given an integer sequence `a = [a1, a2, ..., an]`, we define:

1. **f(a):** The length of the longest subsequence of `a` that is a palindrome.
2. **g(a):** The number of subsequences of length `f(a)` that are palindromes.

Your task is to find a sequence `a` of length `n` such that:

- `1 <= ai <= n` for all `1 <= i <= n`.
- `g(a) > n`.

It is guaranteed that such a sequence always exists.

### Input
The input contains multiple test cases:
- The first line contains an integer `t` (1 ≤ t ≤ 100), the number of test cases.
- For each test case, a single integer `n` (6 ≤ n ≤ 100) is provided, representing the length of the sequence.

### Output
For each test case, output `n` integers representing the sequence `a` that satisfies the conditions. If there are multiple solutions, any valid sequence can be returned.

### Example
#### Input
```
3
6
9
15
```

#### Output
```
1 1 2 3 1 2
7 3 3 7 5 3 7 7 3
15 8 8 8 15 5 8 1 15 5 8 15 15 15 8
```

#### Explanation
In the first test case, `f(a) = 3` (length of the longest palindromic subsequence), and `g(a) = 7` (number of such subsequences), which is greater than `n = 6`. Similarly, for other test cases, the output satisfies the conditions.

---

## Solution Explanation

The goal is to construct a sequence `a` of length `n` such that the number of palindromic subsequences of maximum length is greater than `n`.

### Approach
1. **Observation:** To maximize `g(a)`, the sequence should include repeated elements, as repeated values increase the count of palindromic subsequences.
2. **Construction:**
   - Start and end the sequence with the same values to ensure a palindrome structure.
   - Add a mix of values in the middle, ensuring that the sequence can form multiple palindromic subsequences of the same length.
   - Example: For `n = 6`, the sequence `[1, 1, 2, 3, 1, 2]` achieves this goal.


### Explanation of the Code
1. **Input:** Read the number of test cases `t` and the sequence length `n` for each test case.
2. **Sequence Construction:**
   - Start with `[1, 1]`.
   - Fill the middle with incremental integers starting from `2`.
   - End with `[1, 2]` to ensure a palindromic structure.
3. **Output:** Print the constructed sequence for each test case.

---

## Problem Link
[Longest Palindromic Subsequence with Maximum Count](https://codeforces.com/contest/2056/problem/C)

---

## License
This project is licensed under the MIT License. Feel free to use, modify, and distribute the code.
