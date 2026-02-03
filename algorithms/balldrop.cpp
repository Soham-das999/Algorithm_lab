// A ball is dropped from height H. Each time it rebounds to H/2.
// Find the number of bounces until height < 1 unit

#include <iostream>
using namespace std;

int main() {
    double height;
    int count = 0;

    cout << "Enter initial height: ";
    cin >> height;

    while (height >= 1) {
        count++;
        height = height / 2;
    }

    cout << "Number of times ball touches the ground: " << count << endl;

    return 0;
}
