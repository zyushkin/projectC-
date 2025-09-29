#include <iostream>
#include <cmath>
using namespace std;

bool isInsideShadedArea(double x, double y) {
    // Условие 1: внутри или на окружности
    bool insideCircle = (x * x + y * y <= 16);

    // Условие 2: ниже или на параболе
    bool underParabola = (y <= x * x - 6);

    // Условие 3: между или на прямых
    bool betweenLines = (y >= -2 * x - 2) && (y <= 2 * x - 2);

    return insideCircle && underParabola && betweenLines;
}

int main() {
    double x, y;
    cout << "Введите координаты точки (x и y): ";
    cin >> x >> y;

    if (isInsideShadedArea(x, y)) {
        cout << "Точка принадлежит закрашенной области." << endl;
    } else {
        cout << "Точка НЕ принадлежит закрашенной области." << endl;
    }

    return 0;
}

