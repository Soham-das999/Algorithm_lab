# Power of a Number (Using Recursion)

## Aim
To calculate the power of a number using recursion.

## Pseudocode
ALGO Power(base, exponent)
IF exponent = 0
RETURN 1
END IF
RETURN base × Power(base, exponent − 1)
END ALGO


## Variables Used
- **base** — The base value  
- **exponent** — Power to which base is raised  
- **result** — Stores final result  

## Algorithm Explanation
The algorithm multiplies the base by itself recursively.
The recursion terminates when the exponent becomes zero.

## Time Complexity
**O(n)**

## Space Complexity
**O(n)** (recursive calls)
