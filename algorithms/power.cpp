#include <iostream>
using namespace std;

int power(int x, int n)
{
    int pow = 1;
    for (int i = 0; i < n; i++) {
        pow = pow * x;
    }
    return pow;
}

int main(void)
{
    int x = 2;
    int n = 3;
    int result = power(x, n);
    cout << result << endl;

    return 0;
}