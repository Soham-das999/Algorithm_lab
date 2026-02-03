# Binary Truth Table Generator

## Aim
To generate the binary truth table for a given number of variables.

## Pseudocode
ALGO TruthTable(n)
rows ← 2^n

FOR i ← 0 TO rows − 1
    FOR j ← n − 1 DOWNTO 0
        PRINT (i >> j) AND 1
    END FOR
    PRINT newline
END FOR
END ALGO


## Variables Used
- **n** — Number of boolean variables  
- **rows** — Total rows in the truth table (2ⁿ)  
- **i** — Row counter  
- **j** — Bit position  

## Algorithm Explanation
The algorithm generates all possible binary combinations for `n` variables.
Each row index is treated as a binary number.
Bitwise right-shift and AND operations are used to extract individual bits,
which represent the truth values of variables.

## Time Complexity
**O(n × 2ⁿ)**

## Space Complexity
**O(1)** (excluding output)

## Sample Output
For `n = 3`:
X1 X2 X3
0 0 0
0 0 1
0 1 0
0 1 1
1 0 0
1 0 1
1 1 0
1 1 1


## Applications
- Digital logic design  
- Boolean algebra verification  
- Logic circuit analysis  
