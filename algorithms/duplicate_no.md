# Duplicate Number in Array

## Aim
To find duplicate elements in a given array.

## Pseudocode
ALGO FindDuplicate(arr[], n)
freq[] ← 0

FOR i ← 0 TO n−1
    freq[arr[i]]++
END FOR

FOR each element in freq[]
    IF freq[element] > 1
        PRINT element
    END IF
END FOR
END ALGO


## Variables Used
- **arr[]** — Input array  
- **freq[]** — Frequency array  
- **n** — Number of elements  

## Algorithm Explanation
The algorithm counts the frequency of each element.
Any element with frequency greater than one is a duplicate.

## Time Complexity
**O(n)**

## Space Complexity
**O(n)**
