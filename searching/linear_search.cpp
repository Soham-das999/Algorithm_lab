#include <iostream>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;
using namespace chrono;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int main() {
    ofstream file("linear_search.csv");
    file << "n,avg_time_ms\n";

    srand(time(0));

    int sizes[] = {1000, 2000, 5000, 10000, 20000};
    const int ITER = 1000;   

    for (int k = 0; k < 5; k++) {
        int n = sizes[k];
        int* arr = new int[n];

        for (int i = 0; i < n; i++)
            arr[i] = rand() % 1000000;

        int key = arr[n - 1];   // worst case

        long long total_time = 0;

        for (int i = 0; i < ITER; i++) {
            auto start = high_resolution_clock::now();
            linearSearch(arr, n, key);
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
