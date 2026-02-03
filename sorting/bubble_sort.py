import matplotlib.pyplot as plt
import csv

n = []
time = []

with open("bubble_sort.csv", "r") as file:
    reader = csv.reader(file)
    next(reader)
    for row in reader:
        n.append(int(row[0]))
        time.append(float(row[1]))

plt.plot(n, time, marker='o', label="Bubble Sort (Avg of 1000 runs)")

plt.xlabel("Number of Integers (n)")
plt.ylabel("Average Time (ms)")
plt.title("Bubble Sort Time Complexity")
plt.legend()
plt.grid(True)

plt.show()

n_sq = [x * x for x in n]
scale = time[-1] / n_sq[-1]
n_sq_scaled = [scale * x for x in n_sq]

plt.plot(n, n_sq_scaled, linestyle='--', label="O(n²) (Theoretical)")
