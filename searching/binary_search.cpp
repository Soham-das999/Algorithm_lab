#include <iostream>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;
using namespace chrono;

// Binary Search
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    ofstream file("binary_search.csv");
    file << "n,avg_time_ms\n";

    srand(time(0));

    int sizes[] = {1000, 2000, 5000, 10000, 20000};
    const int ITER = 1000;

    for (int k = 0; k < 5; k++) {
        int n = sizes[k];
        int* arr = new int[n];
 
        for (int i = 0; i < n; i++)
            arr[i] = rand() % 1000000;

        selectionSort(arr, n);

        int key = arr[n / 2];   

        long long total_time = 0;

        for (int it = 0; it < ITER; it++) {
            auto start = high_resolution_clock::now();
            binarySearch(arr, n, key);
            auto end = high_resolution_clock::now();

            total_time += duration_cast<microseconds>(end - start).count();
        }

        double avg_time = (double)total_time / ITER;

        cout << "n = " << n
             << " -> Avg Time = " << avg_time << " ms" << endl;

        file << n << "," << avg_time << "\n";

        delete[] arr;
    }

    file.close();
    return 0;
}
