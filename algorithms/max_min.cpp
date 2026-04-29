#include <iostream>
using namespace std;

struct Pair {
    int min;
    int max;
};

Pair getMinMax(int arr[], int low, int high) {

    Pair result, left, right;

    if (low == high) {
        result.min = arr[low];
        result.max = arr[low];
        return result;
    }

    if (high == low + 1) {
        if (arr[low] > arr[high]) {
            result.max = arr[low];
            result.min = arr[high];
        } else {
            result.max = arr[high];
            result.min = arr[low];
        }
        return result;
    }

    int mid = (low + high) / 2;

    left = getMinMax(arr, low, mid);
    right = getMinMax(arr, mid + 1, high);

    result.min = (left.min < right.min) ? left.min : right.min;
    result.max = (left.max > right.max) ? left.max : right.max;

    return result;
}

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i=0;i<n;i++)
        cin >> arr[i];

    Pair result = getMinMax(arr, 0, n-1);

    cout << "Minimum element: " << result.min << endl;
    cout << "Maximum element: " << result.max << endl;

    return 0;
}
