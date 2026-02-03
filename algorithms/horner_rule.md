# Horner’s Rule (Polynomial Evaluation)

## Aim
To evaluate a polynomial efficiently using Horner’s Rule.

## Pseudocode
ALGO Horner(a[], n, x)
result ← a[0]
FOR i ← 1 TO n
result ← result × x + a[i]
END FOR
RETURN result
END ALGO


## Variables Used
- **a[]** — Coefficients of the polynomial  
- **n** — Degree of the polynomial  
- **x** — Value at which polynomial is evaluated  
- **result** — Stores final polynomial value  

## Algorithm Explanation
Horner’s Rule reduces the number of multiplications by restructuring the polynomial.
The polynomial is evaluated in a single loop.

## Time Complexity
**O(n)**

## Space Complexity
**O(1)**
