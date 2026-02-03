import matplotlib.pyplot as plt
import csv
import math

def read_csv(filename):
    n, time = [], []
    with open(filename, "r") as file:
        reader = csv.reader(file)
        next(reader)  # skip header
        for row in reader:
            n.append(int(row[0]))
            time.append(float(row[1]))
    return n, time

# Read CSV files
n_bubble, t_bubble = read_csv("bubble_sort.csv")
n_insertion, t_insertion = read_csv("insertion_sort.csv")
n_selection, t_selection = read_csv("selection_sort.csv")
n_linear, t_linear = read_csv("linear_search.csv")
n_binary, t_binary = read_csv("binary_search.csv")

# Plot actual execution times
plt.plot(n_bubble, t_bubble, marker='o', label="Bubble Sort (O(n²))")
plt.plot(n_insertion, t_insertion, marker='o', label="Insertion Sort (O(n²))")
plt.plot(n_selection, t_selection, marker='o', label="Selection Sort (O(n²))")
plt.plot(n_linear, t_linear, marker='o', label="Linear Search (O(n))")
plt.plot(n_binary, t_binary, marker='o', label="Binary Search (O(log n))")

# OPTIONAL: theoretical curves (scaled)
# n^2 curve (use bubble data for scaling)
n_sq = [x * x for x in n_bubble]
scale_n2 = t_bubble[-1] / n_sq[-1]
n2_scaled = [scale_n2 * x for x in n_sq]

plt.plot(n_bubble, n2_scaled, linestyle='--', label="O(n²) (Theoretical)")

# O(n) curve (use linear search scaling)
scale_n = t_linear[-1] / n_linear[-1]
n_scaled = [scale_n * x for x in n_linear]

plt.plot(n_linear, n_scaled, linestyle='--', label="O(n) (Theoretical)")

# O(log n) curve (use binary search scaling)
log_n = [math.log2(x) for x in n_binary]
scale_log = t_binary[-1] / log_n[-1]
log_scaled = [scale_log * x for x in log_n]

plt.plot(n_binary, log_scaled, linestyle='--', label="O(log n) (Theoretical)")

# Graph details
plt.xlabel("Number of Integers (n)")
plt.ylabel("Average Time (ms)")
plt.title("Time Complexity Comparison of Sorting and Searching Algorithms")
plt.legend()
plt.grid(True)

plt.show()
