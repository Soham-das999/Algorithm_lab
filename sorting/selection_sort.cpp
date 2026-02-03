#include <iostream>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;
using namespace chrono;

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
    ofstream file("selection_sort.csv");
    file << "n,time_ms\n";

    srand(time(0));

    int sizes[] = {1000, 2000, 5000, 10000};

    for (int k = 0; k < 4; k++) {
        int n = sizes[k];
        int* arr = new int[n];

        for (int i = 0; i < n; i++)
            arr[i] = rand() % 1000000;

        auto start = high_resolution_clock::now();
        selectionSort(arr, n);
        auto end = high_resolution_clock::now();

        auto time = duration_cast<microseconds>(end - start).count();

        cout << "n = " << n << " -> " << time << " ms" << endl;
        file << n << "," << time << "\n";

        delete[] arr;
    }

    file.close();
    return 0;
}
