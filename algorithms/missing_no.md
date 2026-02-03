# Missing Number in Array

## Aim
To find the missing number from an array containing numbers from 1 to n.

## Pseudocode
ALGO FindMissing(arr[], n)
expectedSum ← n × (n + 1) / 2
actualSum ← 0

FOR each element in arr
    actualSum ← actualSum + element
END FOR

RETURN expectedSum − actualSum
END ALGO


## Variables Used
- **arr[]** — Input array  
- **n** — Total number of elements  
- **expectedSum** — Sum of first n natural numbers  
- **actualSum** — Sum of array elements  

## Algorithm Explanation
The algorithm uses the mathematical sum formula.
The difference between expected and actual sum gives the missing number.

## Time Complexity
**O(n)**

## Space Complexity
**O(1)**
