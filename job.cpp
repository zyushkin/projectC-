#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cout << "Введите четыре цифры: ";
    cin >> a >> b >> c >> d;

    cout << "Счастливые номера:" << endl;

    // До 24 переменных для хранения уже выведенных номеров
    int n1 = -1, n2 = -1, n3 = -1, n4 = -1, n5 = -1, n6 = -1;
    int n7 = -1, n8 = -1, n9 = -1, n10 = -1;

    int count = 0; // счётчик выведенных номеров

    // Перебор всех уникальных перестановок 4 цифр
    for (int i1 = 1; i1 <= 4; i1++) {
        int x1;
        if(i1 == 1) x1 = a;
        if(i1 == 2) x1 = b;
        if(i1 == 3) x1 = c;
        if(i1 == 4) x1 = d;

        for (int i2 = 1; i2 <= 4; i2++) {
            if (i2 == i1) continue;
            int x2;
            if(i2 == 1) x2 = a;
            if(i2 == 2) x2 = b;
            if(i2 == 3) x2 = c;
            if(i2 == 4) x2 = d;

            for(int i3 = 1; i3 <= 4; i3++) {
                if (i3 == i1 || i3 == i2) continue;
                int x3;
                if(i3 == 1) x3 = a;
                if(i3 == 2) x3 = b;
                if(i3 == 3) x3 = c;
                if(i3 == 4) x3 = d;

                for(int i4 = 1; i4 <= 4; i4++) {
                    if (i4 == i1 || i4 == i2 || i4 == i3) continue;
                    int x4;
                    if(i4 == 1) x4 = a;
                    if(i4 == 2) x4 = b;
                    if(i4 == 3) x4 = c;
                    if(i4 == 4) x4 = d;

                    if (x1 + x2 == x3 + x4) {
                        int number = x1 * 1000 + x2 * 100 + x3 * 10 + x4;

                        // Проверка: выводим только если это число ещё не выводилось
                        if (number != n1 && number != n2 && number != n3 &&
                            number != n4 && number != n5 && number != n6 &&
                            number != n7 && number != n8 && number != n9 &&
                            number != n10) {

                            cout << number << endl;

                            // Сохраняем выведенное число
                            count++;
                            if (count == 1) n1 = number;
                            else if (count == 2) n2 = number;
                            else if (count == 3) n3 = number;
                            else if (count == 4) n4 = number;
                            else if (count == 5) n5 = number;
                            else if (count == 6) n6 = number;
                            else if (count == 7) n7 = number;
                            else if (count == 8) n8 = number;
                            else if (count == 9) n9 = number;
                            else if (count == 10) n10 = number;
                            // можно добавить ещё переменных при необходимости
                        }
                    }
                }
            }
        }
    }

    return 0;
}
