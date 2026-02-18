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
| Fractional Knapsack | ✅ Yes | Greedy |
| 0/1 Knapsack | ❌ No | Dynamic Programming |

This experiment focuses on **Fractional Knapsack**.

---

# Three Greedy Strategies

## Case 1: Minimum Weight First

### Strategy
Select items in increasing order of weight.

### Logic
