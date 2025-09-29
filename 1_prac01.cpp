#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int hours;
    double stavka, bonus, total;

    cout << "Введите количество отработанных часов: ";
    cin >> hours;

    cout << "Введите ставку почасовой оплаты (руб./час): ";
    cin >> stavka;

    cout << "Введите процент премии: ";
    cin >> bonus;

    total = hours * stavka * (1 + bonus / 100);

    cout << "Общая заработанная сумма: " << total << " руб." << endl;

    return 0;
}