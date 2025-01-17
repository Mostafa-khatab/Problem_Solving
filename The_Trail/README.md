# Restore Terrain Problem

## Problem Description

In a grid of mountainous terrain represented as a rectangular matrix of size `n x m`, each cell `(i, j)` has an altitude `a[i][j]`. However, a path starting from the top-left corner `(1,1)` to the bottom-right corner `(n,m)` has been tampered with by setting the altitudes of the cells on this path to `0`. The path moves strictly via downward (`D`) or rightward (`R`) steps.

The grid originally had a magical property:
- The sum of altitudes in each row is the same (`x`).
- The sum of altitudes in each column is also the same (`x`).

Your task is to restore the altitudes on the path such that the above magical property is preserved.

### Input Format
- The first line contains the number of test cases `t`.
- For each test case:
  - Two integers `n` and `m` (grid dimensions).
  - A string `s` of length `n + m - 2` representing the path (`D` for down, `R` for right).
  - A grid of size `n x m`, where the tampered cells on the path are `0`.

### Output Format
For each test case, output the restored grid such that the magical property is satisfied. If multiple solutions exist, any valid solution can be output.

### Constraints
- `2 \leq n, m \leq 1000`
- `-10^6 \leq a[i][j] \leq 10^6`
- The sum of `n \cdot m` over all test cases does not exceed `10^6`.

### Example

#### Input
```
4
3 3
DRRD
0 2 3
0 0 0
3 1 0
4 5
DRRRRDD
0 1 0 2 3
0 0 0 0 0
-1 0 -3 -3 0
0 0 0 -1 0
2 3
RRD
0 0 0
0 1 0
5 5
DDDDRRRR
0 25 2 9 11
0 6 13 20 22
0 17 24 1 8
0 3 10 12 19
0 0 0 0 0
```

#### Output
```
1 2 3
2 3 1
3 1 2
-6 1 0 2 3
7 -1 3 2 -11
-1 0 -3 -3 7
0 0 0 -1 1
0 -1 1
0 1 -1
18 25 2 9 11
4 6 13 20 22
15 17 24 1 8
21 3 10 12 19
7 14 16 23 5
```

## Solution Explanation

The solution involves restoring the grid while ensuring all rows and columns have the same sum:

1. **Preprocessing:**
   - Compute the sum of altitudes for each row and column (excluding the tampered cells).

2. **Restoration:**
   - Traverse the path defined by `s`.
   - For each cell `(i, j)` on the path:
     - Assign a value to ensure the row and column sums remain consistent.
     - Update the row and column sums dynamically.

3. **Output the Result:**
   - After processing all path cells, print the restored grid.

---

### Algorithm Complexity
- **Time Complexity:** `O(n \cdot m)` per test case.
- **Space Complexity:** `O(n + m)` for storing row and column sums.

---

## Problem Link
[The Trail](https://codeforces.com/contest/2055/problem/C)

---

## License
This project is licensed under the MIT License. Feel free to use, modify, and distribute the code.