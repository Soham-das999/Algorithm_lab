//evaluate polynomial: 
//P(x) = a₀xⁿ + a₁xⁿ⁻¹ + … + aₙ

#include <iostream>
using namespace std;

int main() {
    int n;
    double x, result;

    cout << "Enter degree of polynomial: ";
    cin >> n;

    double a[n + 1];

    cout << "Enter coefficients (from highest degree to constant):\n";
    for (int i = 0; i <= n; i++)
        cin >> a[i];

    cout << "Enter value of x: ";
    cin >> x;

    result = a[0];
    for (int i = 1; i <= n; i++) {
        result = result * x + a[i];
    }

    cout << "Polynomial value = " << result << endl;

    return 0;
}
