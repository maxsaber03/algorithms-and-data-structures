# Big-O Basics 

Big-O describes how runtime (or memory) grows as input size `n` grows. It ignores constants and small effects, and focuses on the dominant growth as `n` becomes large.

## Common Examples

### O(1) — Constant Time
The number of operations does not depend on `n`.
Example: accessing an array element by index.

### O(log n) — Logarithmic Time
Each step reduces the problem size by a constant factor (often halves it).
Example: binary search on a sorted array.

### O(n) — Linear Time
Work grows proportionally with `n`.
Example: scanning an array once to compute a sum.

### O(n^2) — Quadratic Time
Two nested loops over `n` items.
Example: comparing all pairs of items (simple double-loop).

## Notes
- Worst-case Big-O is often used when comparing algorithms.
- For small inputs, constants can matter, but Big-O is useful for predicting scalability.
