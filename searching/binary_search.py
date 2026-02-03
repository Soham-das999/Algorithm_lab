import matplotlib.pyplot as plt
import csv

n = []
time = []

with open("binary_search.csv", "r") as file:
    reader = csv.reader(file)
    next(reader)
    for row in reader:
        n.append(int(row[0]))
        time.append(float(row[1]))

plt.plot(n, time, marker='o', label="Binary Search (Avg of 1000 runs)")

plt.xlabel("Number of Integers (n)")
plt.ylabel("Average Time (ms)")
plt.title("Binary Search Time Complexity")
plt.legend()
plt.grid(True)

plt.show()

import math

log_n = [math.log2(x) for x in n]
scale = time[-1] / log_n[-1]
log_scaled = [scale * x for x in log_n]

plt.plot(n, log_scaled, linestyle='--', label="O(log n) (Theoretical)")
