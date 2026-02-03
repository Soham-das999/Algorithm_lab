# Ball Drop Problem (Using Recursion)

## Aim
To calculate the number of times a ball will bounce until its velocity drops below a minimum threshold using recursion.

## Pseudocode
IF velocity < threshold
    RETURN 0
END IF

newVelocity ← velocity × resistance
RETURN 1 + CountBounces(newVelocity)

## Variables Used
- **velocity** — Current velocity of the ball  
- **threshold** — Minimum velocity limit  
- **resistance** — Reduction factor after each bounce  
- **count** — Stores number of bounces  

## Algorithm Explanation
The algorithm recursively reduces the velocity after each bounce.  
When the velocity becomes less than the threshold, recursion stops.  
Each recursive call contributes one bounce to the final count.

## Time Complexity
**O(log n)**

## Space Complexity
**O(log n)** (due to recursion stack)
