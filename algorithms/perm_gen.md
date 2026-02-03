# Permutation Generator (Using Recursion)

## Aim
To generate all possible permutations of a given string using recursion.

## Pseudocode
ALGO Permute(string, left, right)
IF left = right
PRINT string
ELSE
FOR i ← left TO right
SWAP string[left], string[i]
Permute(string, left + 1, right)
SWAP string[left], string[i] // backtrack
END FOR
END IF
END ALGO


## Variables Used
- **string** — Input string  
- **left** — Starting index  
- **right** — Ending index  
- **i** — Loop variable  

## Algorithm Explanation
The algorithm generates permutations by fixing one character at a time.
It swaps characters and recursively permutes the remaining substring.
Backtracking is used to restore the original string state.

## Time Complexity
**O(n!)**

## Space Complexity
**O(n)** (recursion stack)
