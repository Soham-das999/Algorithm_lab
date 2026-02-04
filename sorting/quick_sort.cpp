#include <iostream>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;
using namespace chrono;

int partition(int a[], int l, int h) {
    int i = l, j = h;
    int pivot = a[l];

    do {
        do { i++; } while (a[i] <= pivot);
        do { j--; } while (a[j] > pivot);
        if (i < j)
            swap(a[i], a[j]);
    } while (i < j);

    swap(a[l], a[j]);
    return j;
}

void quick_sort(int a[], int l, int h) {
    if (l < h) {
        int x = partition(a, l, h);
        quick_sort(a, l, x);
        quick_sort(a, x + 1, h);
    }
}

int main() {
    ofstream file("quick_sort.csv");
    file << "n,avg_time_ms\n";

    srand(time(0));

    int sizes[] = {1000, 2000, 5000, 10000};
    const int ITER = 1000;

    for (int k = 0; k < 4; k++) {
        int n = sizes[k];
        long long total_time = 0;

        for (int it = 0; it < ITER; it++) {
            int* arr = new int[n + 1];

            // RANDOM array
            for (int i = 0; i < n; i++)
                arr[i] = rand() % 1000000;

            arr[n] = 9999999; // sentinel for partition logic

            auto start = high_resolution_clock::now();
            quick_sort(arr, 0, n);
            auto end = high_resolution_clock::now();

            total_time += duration_cast<microseconds>(end - start).count();

            delete[] arr;
        }

        double avg_time = (double)total_time / ITER;

        cout << "n = " << n << " -> Avg Time = " 
             << avg_time << " ms" << endl;

        file << n << "," << avg_time << "\n";
    }

    file.close();
    return 0;
}
