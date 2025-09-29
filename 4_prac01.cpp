#include <windows.h>
#include <iostream>
using namespace std;

void calculate(int hours, double stavka, double bonus, double &total, double &nalog, double &net)
{
    total = hours * stavka * (1 + bonus / 100);
    nalog = total * 0.13;
    net = total - nalog;
}

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int hours;
    double stavka, bonus;
    double total, nalog, net;

    cout << "Введите количество отработанных часов: ";
    cin >> hours;
    cout << "Введите ставку почасовой оплаты (руб./час): ";
    cin >> stavka;
    cout << "Введите процент премии: ";
    cin >> bonus;

    calculate(hours, stavka, bonus, total, nalog, net);

    cout << "Общая сумма: " << total << " руб." << endl;
    cout << "Подоходный налог: " << nalog << " руб." << endl;
    cout << "На руки: " << net << " руб." << endl;

    return 0;
}