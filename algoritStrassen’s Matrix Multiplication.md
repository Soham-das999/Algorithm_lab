# Strassen’s Matrix Multiplication Algorithm

## Aim
To multiply two square matrices efficiently using Strassen’s Divide and Conquer algorithm.

---

# Problem Statement

Given two square matrices A and B of size n × n,
compute their product matrix C using Strassen’s algorithm.

---

# Why Strassen’s Algorithm?

Normal matrix multiplication takes:

O(n³)

Strassen reduces the number of multiplications from 8 to 7,
resulting in:

O(n^2.81)

This makes it faster for very large matrices.

---

# Key Idea (Divide and Conquer)

Step 1: Divide matrices into 4 submatrices.

If matrix A is:

| A11  A12 |
| A21  A22 |

If matrix B is:

| B11  B12 |
| B21  B22 |

Step 2: Compute 7 recursive products instead of 8.

---

# The 7 Strassen Products

P1 = (A11 + A22)(B11 + B22)
P2 = (A21 + A22)B11
P3 = A11(B12 − B22)
P4 = A22(B21 − B11)
P5 = (A11 + A12)B22
P6 = (A21 − A11)(B11 + B12)
P7 = (A12 − A22)(B21 + B22)


---

# Construct Result Matrix

C11 = P1 + P4 − P5 + P7
C12 = P3 + P5
C21 = P2 + P4
C22 = P1 + P3 − P2 + P6


---

# Recurrence Relation

T(n) = 7T(n/2) + O(n²)

Using Master Theorem:

Time Complexity = O(n^(log₂7)) ≈ O(n^2.81)

---

# Base Case

When matrix size becomes 2 × 2,
apply Strassen’s 7-product formula directly.

---

# Requirements

- Matrices must be square.
- Size must be power of 2 (2, 4, 8, 16, …).
- If not, pad matrix with zeros to next power of 2.

---

# Time Complexity

| Algorithm | Time Complexity |
|------------|----------------|
| Normal Multiplication | O(n³) |
| Strassen Algorithm | O(n^2.81) |

---

# Space Complexity

O(n²)

Additional space is required for submatrices and recursive calls.

---

# Advantages

- Faster for large matrices
- Reduces multiplication operations
- Useful in scientific computing

---

# Disadvantages

- More addition/subtraction operations
- Extra memory usage
- Less efficient for very small matrices
- Numerical instability in floating-point cases

---

# Applications

- Scientific computing
- Image processing
- Large matrix calculations
- Machine learning algorithms

---

# Conclusion

Strassen’s algorithm is an optimized matrix multiplication technique
based on divide and conquer, reducing complexity from O(n³) to O(n^2.81).
It is efficient for large matrix operations.

---
