# K-th Smallest Element (Quick Select Algorithm)

## Aim
To find the K-th smallest element in an unsorted array using the Quick Select algorithm without fully sorting the array.

---

# Problem Statement

Given:
- An array of `n` elements
- An integer `k`

Find:
> The K-th smallest element in the array.

---

# Example

Input:
Array = 7 10 4 3 20 15
k = 3


Sorted array would be:


3 4 7 10 15 20


Output:


7


---

# Algorithm Used: Quick Select

Quick Select is based on the partition logic of Quick Sort.
However, instead of sorting the entire array, it only processes the necessary part.

---

# Algorithm Steps

1. Choose a pivot element.
2. Partition the array around the pivot.
3. Let `pi` be the pivot index after partition.
4. If `pi == k`, return the element.
5. If `pi > k`, search in left subarray.
6. If `pi < k`, search in right subarray.

---

# Pseudocode



ALGO QuickSelect(arr, low, high, k)

IF low <= high
    pi = Partition(arr, low, high)

    IF pi == k
        RETURN arr[pi]

    ELSE IF pi > k
        RETURN QuickSelect(arr, low, pi - 1, k)

    ELSE
        RETURN QuickSelect(arr, pi + 1, high, k)


END ALGO


---

# Partition Logic



Choose pivot
Move elements smaller than pivot to left
Move larger elements to right
Return pivot position


---

# Time Complexity

| Case | Complexity |
|------|------------|
| Best Case | O(n) |
| Average Case | O(n) |
| Worst Case | O(n²) |

---

# Why Average Time is O(n)?

Each partition reduces the search space.
Unlike Quick Sort, we only recurse into one side of the array.

---

# Space Complexity

O(1) (in-place algorithm)

O(log n) recursion stack in average case

---

# Comparison with Other Methods

| Method | Time Complexity |
|--------|----------------|
| Sorting | O(n log n) |
| Min Heap | O(n + k log n) |
| Quick Select | O(n) average |

---

# Why Not Sort Entire Array?

Sorting takes O(n log n).
Quick Select finds answer faster in average O(n).

---

# Applications

- Finding median
- Order statistics
- Competitive programming
- Data analysis

---
# Conclusion

Quick Select efficiently finds the K-th smallest element without sorting the entire array.
It is optimal in average case and widely used in practical applications.

---
