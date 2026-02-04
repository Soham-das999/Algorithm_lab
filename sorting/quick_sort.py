import matplotlib.pyplot as plt
import csv
import math

n = []
time = []

with open("quick_sort.csv", "r") as file:
    reader = csv.reader(file)
    next(reader)
    for row in reader:
        n.append(int(row[0]))
        time.append(float(row[1]))

plt.plot(n, time, marker='o', label="Quick Sort (Actual)")

# Theoretical O(n log n) curve
nlogn = [x * math.log2(x) for x in n]
scale = time[-1] / nlogn[-1]
nlogn_scaled = [scale * x for x in nlogn]

plt.plot(n, nlogn_scaled, linestyle='--', label="O(n log n) (Theoretical)")

plt.xlabel("Number of Integers (n)")
plt.ylabel("Average Time (ms)")
plt.title("Quick Sort Time Complexity")
plt.legend()
plt.grid(True)

plt.show()
