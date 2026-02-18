# Knapsack Problem (Greedy Approach Comparison)

## Aim
To solve the Knapsack Problem using three greedy strategies and compare their results:
1. Minimum Weight First
2. Maximum Profit First
3. Maximum Profit/Weight Ratio First

---

# Problem Statement

Given:
- `n` items
- Each item has:
  - Weight (`w`)
  - Profit (`p`)
- A knapsack with limited capacity (`W`)

Goal:
Select items such that:
- Total weight ≤ capacity
- Total profit is maximum

---

# Types of Knapsack

| Type | Can Break Item? | Method Used |
|------|------------------|-------------|
| Fractional Knapsack | Yes | Greedy |
| 0/1 Knapsack | No | Dynamic Programming |

This experiment focuses on **Fractional Knapsack**.

---

# Three Greedy Strategies

## Case 1: Minimum Weight First

### Strategy
Select items in increasing order of weight.

### Logic
Sort items by weight (ascending)
Pick items until capacity is full
Take fraction if needed

### Observation
 Does NOT always give optimal result.

---

## Case 2: Maximum Profit First

### Strategy
Select items in decreasing order of profit.

### Logic
Sort items by profit (descending)
Pick items until capacity is full
Take fraction if needed


### Observation
 May fail to give maximum total profit.

---

## Case 3: Maximum Profit/Weight Ratio First (Correct Method)

### Strategy
Select items in decreasing order of:

profit / weight

### Logic
Compute ratio = profit / weight
Sort items by ratio (descending)
Pick full items first
Take fraction if capacity remains


### Why It Works
Because it maximizes profit gained per unit weight.

This guarantees optimal solution for Fractional Knapsack.

---

# Example

Capacity = 50

| Item | Weight | Profit | Ratio |
|------|--------|--------|--------|
| 1 | 10 | 60 | 6 |
| 2 | 20 | 100 | 5 |
| 3 | 30 | 120 | 4 |

### Case 1 (Min Weight)
Profit = 240

### Case 2 (Max Profit)
Profit = 220 

### Case 3 (Max Ratio)
Profit = 240 

---

# Algorithm (Fractional Knapsack)
FOR each item
compute ratio = profit / weight

Sort items in descending order of ratio

FOR each item
IF capacity ≥ weight
take full item
reduce capacity
ELSE
take fractional part
break


---

# Time Complexity

Sorting:
O(n log n)

Selection:
O(n)

Total:
O(n log n)

---

# Space Complexity
O(1) (excluding input storage)

---

# Why Greedy Fails for 0/1 Knapsack

In 0/1 Knapsack:
- Items cannot be broken
- Greedy choice does not guarantee optimal result
- Dynamic Programming is required

---

# Conclusion

Among the three greedy strategies:
- Minimum weight → Not reliable
- Maximum profit → Not reliable
- Maximum profit/weight ratio → Optimal for fractional knapsack

---
