#include <iostream>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;
using namespace chrono;

// Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    ofstream file("insertion_sort.csv");
    file << "n,avg_time_ms\n";

    srand(time(0));

    int sizes[] = {1000, 2000, 5000, 10000};
    const int ITER = 1000;

    for (int k = 0; k < 4; k++) {
        int n = sizes[k];

        long long total_time = 0;

        for (int it = 0; it < ITER; it++) {
            int* arr = new int[n];

            // RANDOM array → average case (O(n²))
            for (int i = 0; i < n; i++)
                arr[i] = rand() % 1000000;

            auto start = high_resolution_clock::now();
            insertionSort(arr, n);
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
