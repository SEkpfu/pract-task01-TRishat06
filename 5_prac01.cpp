#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int hours1, hours2;
    double stavka1, stavka2, bonus;

    cout << "Первый работник:" << endl;
    cout << "Количество часов: ";
    cin >> hours1;
    cout << "Ставка оплаты: ";
    cin >> stavka1;

    cout << "Второй работник:" << endl;
    cout << "Количество часов: ";
    cin >> hours2;
    cout << "Ставка оплаты: ";
    cin >> stavka2;

    cout << "Процент премии: ";
    cin >> bonus;

    double zarplata1 = hours1 * stavka1 * (1 + bonus / 100);
    double zarplata2 = hours2 * stavka2 * (1 + bonus / 100);

    if (zarplata1 > zarplata2)
    {
        cout << "Больше заработал первый работник" << endl;
    }
    else if (zarplata2 > zarplata1)
    {
        cout << "Больше заработал второй работник" << endl;
    }
    else
    {
        cout << "Оба работника заработали одинаково" << endl;
    }

    cout << "Общая сумма: " << zarplata1 + zarplata2 << " руб." << endl;

    return 0;
}