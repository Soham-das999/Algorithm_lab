import matplotlib.pyplot as plt
import csv

n = []
time = []

with open("insertion_sort.csv", "r") as file:
    reader = csv.reader(file)
    next(reader)
    for row in reader:
        n.append(int(row[0]))
        time.append(float(row[1]))

plt.plot(n, time, marker='o', label="Insertion Sort (Avg of 1000 runs)")

plt.xlabel("Number of Integers (n)")
plt.ylabel("Average Time (ms)")
plt.title("Insertion Sort Time Complexity")
plt.legend()
plt.grid(True)

plt.show()
