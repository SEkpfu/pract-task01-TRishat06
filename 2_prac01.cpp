#include <windows.h>
#include <iostream>
using namespace std;

double calculateZarplata(int hours, double stavka, double bonus)
{
    return hours * stavka * (1 + bonus / 100);
}

double calculateNalog(double zarplata)
{
    return zarplata * 0.13;
}

double calculateNetZarplata(double zarplata, double nalog)
{
    return zarplata - nalog;
}

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int hours;
    double stavka, bonus;

    cout << "Введите количество отработанных часов: ";
    cin >> hours;

    cout << "Введите ставку почасовой оплаты (руб./час): ";
    cin >> stavka;

    cout << "Введите процент премии: ";
    cin >> bonus;

    double zarplata = calculateZarplata(hours, stavka, bonus);
    double nalog = calculateNalog(zarplata);
    double netZarplata = calculateNetZarplata(zarplata, nalog);

    cout << "Общая сумма: " << zarplata << " руб." << endl;
    cout << "Подоходный налог: " << nalog << " руб." << endl;
    cout << "На руки: " << netZarplata << " руб." << endl;

    return 0;
}