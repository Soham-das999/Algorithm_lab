import matplotlib.pyplot as plt
import csv

n = []
time = []

with open("linear_search.csv", "r") as file:
    reader = csv.reader(file)
    next(reader)
    for row in reader:
        n.append(int(row[0]))
        time.append(float(row[1]))

plt.plot(n, time, marker='o', label="Linear Search (Avg over 1000 runs)")

plt.xlabel("Number of Integers (n)")
plt.ylabel("Average Time (ms)")
plt.title("Linear Search Time Complexity")
plt.legend()
plt.grid(True)

plt.show()
