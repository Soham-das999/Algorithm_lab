# Binary Search

## Aim
To search an element in a sorted array using binary search.

## Pseudocode
ALGO BinarySearch(arr[], n, key)
low ← 0, high ← n−1

WHILE low ≤ high
    mid ← (low + high) / 2
    IF arr[mid] = key
        RETURN mid
    ELSE IF arr[mid] < key
        low ← mid + 1
    ELSE
        high ← mid − 1
    END IF
END WHILE

RETURN -1
END ALGO


## Variables Used
- **arr[]** — Sorted input array  
- **low, high, mid** — Index variables  
- **key** — Element to be searched  

## Algorithm Explanation
Binary search divides the search space into halves repeatedly,
significantly reducing search time.

## Time Complexity
**O(log n)**

## Space Complexity
**O(1)**
