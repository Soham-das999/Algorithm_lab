# Insertion Sort

## Aim
To sort elements using insertion sort technique.

## Pseudocode
ALGO InsertionSort(arr[], n)
FOR i ← 1 TO n−1
key ← arr[i]
j ← i−1
WHILE j ≥ 0 AND arr[j] > key
arr[j+1] ← arr[j]
j ← j−1
END WHILE
arr[j+1] ← key
END FOR
END ALGO

## Variables Used
- **arr[]** — Input array  
- **key** — Element to be inserted  
- **i, j** — Loop variables  

## Algorithm Explanation
Insertion sort builds the sorted list one element at a time by placing
each element in its correct position.

## Time Complexity
**O(n²)**

## Space Complexity
**O(1)**
