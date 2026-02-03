#include <iostream>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;
using namespace chrono;

// Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    ofstream file("bubble_sort.csv");
    file << "n,avg_time_ms\n";

    srand(time(0));

    int sizes[] = {1000, 2000, 5000, 10000};
    const int ITER = 1000;

    for (int k = 0; k < 4; k++) {
        int n = sizes[k];
        long long total_time = 0;

        for (int it = 0; it < ITER; it++) {
            int* arr = new int[n];

            // RANDOM array → average case O(n²)
            for (int i = 0; i < n; i++)
                arr[i] = rand() % 1000000;

            auto start = high_resolution_clock::now();
            bubbleSort(arr, n);
            auto end = high_resolution_clock::now();

            total_time += duration_cast<microseconds>(end - start).count();

            delete[] arr;
        }

        double avg_time = (double)total_time / ITER;

        cout << "n = " << n
             << " -> Avg Time = " << avg_time << " ms" << endl;

        file << n << "," << avg_time << "\n";
    }

    file.close();
    return 0;
}
