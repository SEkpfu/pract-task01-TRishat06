#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int hours1, hours2, hours3, hours4, hours5;
    double stavka1, stavka2, stavka3, stavka4, stavka5, bonus;

    cout << "Введите процент премии: ";
    cin >> bonus;

    cout << "Работник 1 - часы и ставка: ";
    cin >> hours1 >> stavka1;
    cout << "Работник 2 - часы и ставка: ";
    cin >> hours2 >> stavka2;
    cout << "Работник 3 - часы и ставка: ";
    cin >> hours3 >> stavka3;
    cout << "Работник 4 - часы и ставка: ";
    cin >> hours4 >> stavka4;
    cout << "Работник 5 - часы и ставка: ";
    cin >> hours5 >> stavka5;

    double zarplata1 = hours1 * stavka1 * (1 + bonus / 100);
    double zarplata2 = hours2 * stavka2 * (1 + bonus / 100);
    double zarplata3 = hours3 * stavka3 * (1 + bonus / 100);
    double zarplata4 = hours4 * stavka4 * (1 + bonus / 100);
    double zarplata5 = hours5 * stavka5 * (1 + bonus / 100);

    cout << "Зарплата работника 1: " << zarplata1 << " руб." << endl;
    cout << "Зарплата работника 2: " << zarplata2 << " руб." << endl;
    cout << "Зарплата работника 3: " << zarplata3 << " руб." << endl;
    cout << "Зарплата работника 4: " << zarplata4 << " руб." << endl;
    cout << "Зарплата работника 5: " << zarplata5 << " руб." << endl;

    double average = (zarplata1 + zarplata2 + zarplata3 + zarplata4 + zarplata5) / 5;
    cout << "Средняя зарплата в бригаде: " << average << " руб." << endl;

    return 0;
}