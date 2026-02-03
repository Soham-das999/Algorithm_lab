import matplotlib.pyplot as plt
import csv

n = []
time = []

with open("selection_sort.csv", "r") as file:
    reader = csv.reader(file)
    next(reader)
    for row in reader:
        n.append(int(row[0]))
        time.append(int(row[1]))

plt.plot(n, time, marker='o', label="Selection Sort (Actual)")

plt.xlabel("Number of Integers (n)")
plt.ylabel("Time (milliseconds)")
plt.title("Selection Sort Time Complexity")
plt.legend()
plt.grid(True)

plt.show()
