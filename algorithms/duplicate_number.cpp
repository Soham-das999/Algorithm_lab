//frequency array 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int freq[1000] = {0};

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    cout << "Duplicate element(s): ";
    for (int i = 0; i < 1000; i++) {
        if (freq[i] > 1)
            cout << i << " ";
    }

    cout << endl;
    return 0;
}
