#include <windows.h>
#include <iostream>
using namespace std;

void data(int &hours, double &stavka, double &bonus)
{
    cout << "Введите количество отработанных часов: ";
    cin >> hours;
    cout << "Введите ставку почасовой оплаты (руб./час): ";
    cin >> stavka;
    cout << "Введите процент премии: ";
    cin >> bonus;
}

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int hours;
    double stavka, bonus;

    data(hours, stavka, bonus);

    double total = hours * stavka * (1 + bonus / 100);
    cout << "Общая заработанная сумма: " << total << " руб." << endl;

    return 0;
}