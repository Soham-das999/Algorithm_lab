# Bubble Sort

## Aim
To sort elements using bubble sort technique.

## Pseudocode
ALGO BubbleSort(arr[], n)
FOR i ← 0 TO n−2
FOR j ← 0 TO n−i−2
IF arr[j] > arr[j+1]
SWAP arr[j], arr[j+1]
END IF
END FOR
END FOR
END ALGO


## Variables Used
- **arr[]** — Input array  
- **n** — Number of elements  

## Algorithm Explanation
Bubble sort repeatedly swaps adjacent elements if they are in the wrong order.
Largest elements move to the end after each pass.

## Time Complexity
**O(n²)**

## Space Complexity
**O(1)**
