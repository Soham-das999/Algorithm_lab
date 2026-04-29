#include <iostream>
using namespace std;

int n, target;
int setArr[20], subset[20];

void subsetSum(int i, int sum, int k) {

    if(sum == target) {
        cout << "Subset found: ";
        for(int j = 0; j < k; j++)
            cout << subset[j] << " ";
        cout << endl;
        return;
    }

    if(i == n || sum > target)
        return;

    // Include element
    subset[k] = setArr[i];
    subsetSum(i + 1, sum + setArr[i], k + 1);

    // Exclude element
    subsetSum(i + 1, sum, k);
}

int main() {

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> setArr[i];

    cout << "Enter target sum: ";
    cin >> target;

    subsetSum(0, 0, 0);

    return 0;
}
