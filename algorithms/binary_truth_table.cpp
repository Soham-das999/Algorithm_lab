#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of variables: ";
    cin >> n;

    int rows = 1 << n;   // 2^n rows

    cout << "\nTruth Table:\n";

    // Print column headers
    for (int i = 0; i < n; i++) {
        cout << "X" << i + 1 << " ";
    }
    cout << endl;

    // Generate truth table
    for (int i = 0; i < rows; i++) {
        for (int j = n - 1; j >= 0; j--) {
            cout << ((i >> j) & 1) << "  ";
        }
        cout << endl;
    }

    return 0;
}
