# Crafting an Artifact Using Magical Materials

## Problem Description

You are given `n` different types of magical materials, each numbered from 1 to `n`. Initially, you have `ai` units of material `i`. To craft an artifact, you need at least `bi` units of material `i` for each type. You are allowed to perform the following operation any number of times:

1. **Select a material `i`** (where `1 ≤ i ≤ n`).
2. **Spend 1 unit** of every other material `j` (where `j ≠ i`) to gain 1 unit of material `i`.

All material counts must remain non-negative after any operation.

Determine if it is possible to craft the artifact using the given materials and operations.

### Input
- The first line contains the number of test cases, `t` (1 ≤ t ≤ 10⁴).
- Each test case consists of:
  - An integer `n` (2 ≤ n ≤ 2 × 10⁵), the number of material types.
  - A line of `n` integers, `a1, a2, ..., an` (0 ≤ ai ≤ 10⁹), the current quantity of each material.
  - A line of `n` integers, `b1, b2, ..., bn` (0 ≤ bi ≤ 10⁹), the required quantity of each material to craft the artifact.

It is guaranteed that the sum of `n` over all test cases does not exceed 2 × 10⁵.

### Output
For each test case, output "YES" if it is possible to craft the artifact, otherwise output "NO".

You can output the answer in any case (e.g., "YES", "yes", "Yes").

### Example
#### Input
```
3
4
0 5 5 1
1 4 4 0
3
1 1 3
2 2 1
2
1 10
3 3
```

#### Output
```
YES
NO
YES
```

### Explanation
1. **First Test Case:**
   - Perform the operation on material 1 to convert materials 2, 3, and 4 into material 1. After doing so, the quantities match the requirements.
2. **Second Test Case:**
   - It is impossible to rearrange the materials to meet the requirements.
3. **Third Test Case:**
   - Perform the operation on material 1 twice. This satisfies the requirements.

---

## Solution Explanation

The solution involves checking if the required materials can be achieved by performing the operations. The approach is:

1. Identify the materials where the required amount exceeds the current amount (`b[i] > a[i]`).
   - If more than one material needs additional resources, output "NO" as it's impossible to meet the requirement.
2. If exactly one material `i` needs additional resources:
   - Calculate the deficit: `need = b[i] - a[i]`.
   - Distribute this deficit across all other materials.
   - Check if the remaining materials still meet their respective requirements (`a[j] ≥ b[j]` for `j ≠ i`).
3. If no material needs additional resources (`b[i] ≤ a[i]` for all `i`), output "YES".


---

## Problem Link
[Crafting an Artifact Using Magical Materials](https://codeforces.com/contest/2055/problem/B)

---

## License
This project is licensed under the MIT License. Feel free to use, modify, and distribute the code.
