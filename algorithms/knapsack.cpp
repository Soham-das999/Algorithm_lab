#include <iostream>
using namespace std;

struct Item {
    int weight;
    int profit;
    double ratio;
};

void sortByWeight(Item arr[], int n) {
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j].weight > arr[j+1].weight)
                swap(arr[j], arr[j+1]);
}

void sortByProfit(Item arr[], int n) {
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j].profit < arr[j+1].profit)
                swap(arr[j], arr[j+1]);
}

void sortByRatio(Item arr[], int n) {
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j].ratio < arr[j+1].ratio)
                swap(arr[j], arr[j+1]);
}

double fractionalKnapsack(Item arr[], int n, int capacity) {

    double totalProfit = 0.0;

    for(int i=0;i<n;i++) {

        if(capacity >= arr[i].weight) {
            totalProfit += arr[i].profit;
            capacity -= arr[i].weight;
        }
        else {
            totalProfit += arr[i].ratio * capacity;
            break;
        }
    }

    return totalProfit;
}

int main() {

    int n, capacity;

    cout << "Enter number of items: ";
    cin >> n;

    Item arr1[n], arr2[n], arr3[n];

    for(int i=0;i<n;i++) {
        cout << "Enter weight and profit: ";
        cin >> arr1[i].weight >> arr1[i].profit;
        arr1[i].ratio = (double)arr1[i].profit / arr1[i].weight;

        arr2[i] = arr1[i];
        arr3[i] = arr1[i];
    }

    cout << "Enter capacity: ";
    cin >> capacity;

    // Case 1: Minimum Weight
    sortByWeight(arr1, n);
    double profit1 = fractionalKnapsack(arr1, n, capacity);

    // Case 2: Maximum Profit
    sortByProfit(arr2, n);
    double profit2 = fractionalKnapsack(arr2, n, capacity);

    // Case 3: Maximum Ratio (Correct)
    sortByRatio(arr3, n);
    double profit3 = fractionalKnapsack(arr3, n, capacity);

    cout << "\nMinimum Weight Strategy Profit: " << profit1 << endl;
    cout << "Maximum Profit Strategy Profit: " << profit2 << endl;
    cout << "Maximum Profit/Weight Strategy Profit: " << profit3 << endl;

    return 0;
}
