#include <iostream>
#include <cmath>   // для M_PI, atan
using namespace std;

int main() {
    double x;
    cout << "Введите x (x > 1): ";
    cin >> x;

    double sum = M_PI / 2;   // начинаем с π/2
    double term = 1.0 / x;   // первое слагаемое при n=0
    int n = 0;

    while (fabs(term) >= 1e-7) {
        sum += term;

        n++;
        // следующее слагаемое:
        // term_{n} = - term_{n-1} * (2n-1) / ( (2n+1) * x^2 )
        term *= -1.0 * (2.0 * n - 1) / ( (2.0 * n + 1) * x * x );
    }

    // точное значение
    double exact = atan(x);

    cout << "Приближенное значение: " << sum << endl;
    cout << "Точное значение (atan): " << exact << endl;
    cout << "Погрешность: " << fabs(sum - exact) << endl;

    return 0;
}
