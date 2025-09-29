#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    double x, y, f;

    cout << "Введите x и y: ";
    cin >> x >> y;

    // 1 случай: x > 0 и x - y > 0
    if (x > 0 && (x - y) > 0) {
        // Проверим, чтобы логарифм был определён
        if ((x - y) <= 0 || (x - 2 * y) == 0 || (x - 2 * y) == 1 || (x - 2 * y) == -1) {
            cout << "Функция не определена при этих значениях." << endl;
            return 0;
        }
        f = (1 - log(x - y)) / log(fabs(x - 2 * y));
    }
    // 2 случай: x <= 0
    else if (x <= 0) {
        f = exp(-y) + (2 - sin(x)) / (2 + sin(x));
    }
    // 3 случай: все остальные
    else {
        f = 1 / exp(x + y);
    }

    cout << "f(" << x << ", " << y << ") = " << f << endl;

    return 0;
}
