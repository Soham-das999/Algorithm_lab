# Tower of Hanoi

## Aim
To solve the Tower of Hanoi problem using recursion.

## Pseudocode
ALGO TowerOfHanoi(n, source, auxiliary, destination)
IF n = 1
PRINT "Move disk 1 from source to destination"
RETURN
END IF

TowerOfHanoi(n−1, source, destination, auxiliary)
PRINT "Move disk n from source to destination"
TowerOfHanoi(n−1, auxiliary, source, destination)
END ALGO


## Variables Used
- **n** — Number of disks  
- **source** — Source rod  
- **auxiliary** — Helper rod  
- **destination** — Target rod  

## Algorithm Explanation
The problem is solved by moving `n−1` disks to the auxiliary rod,
then moving the largest disk to the destination,
and finally moving the `n−1` disks from auxiliary to destination.

## Time Complexity
**O(2ⁿ)**

## Space Complexity
**O(n)** (recursion stack)
