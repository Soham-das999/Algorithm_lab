# Selection Sort

## Aim
To sort elements using selection sort technique.

## Pseudocode
ALGO SelectionSort(arr[], n)
FOR i ← 0 TO n−2
min ← i
FOR j ← i+1 TO n−1
IF arr[j] < arr[min]
min ← j
END IF
END FOR
SWAP arr[i], arr[min]
END FOR
END ALGO


## Variables Used
- **arr[]** — Input array  
- **n** — Number of elements  
- **min** — Index of minimum element  

## Algorithm Explanation
The algorithm selects the smallest element from the unsorted portion
and places it at its correct position.

## Time Complexity
**O(n²)**

## Space Complexity
**O(1)**
