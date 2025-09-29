#include <windows.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int n;
    cout << "Введите количество работников: ";
    cin >> n;
    vector<int> hours(n);
    vector<double> stavka(n);
    vector<double> zarplata(n);
    vector<double> nalog(n);
    vector<double> net(n);

    double bonus;
    cout << "Введите процент премии: ";
    cin >> bonus;
    for (int i = 0; i < n; i++)
    {
        cout << "Работник " << i + 1 << " - часы и ставка: ";
        cin >> hours[i] >> stavka[i];

        zarplata[i] = hours[i] * stavka[i] * (1 + bonus / 100);
        nalog[i] = zarplata[i] * 0.13;
        net[i] = zarplata[i] - nalog[i];
    }
    int minIndex = 0;
    int maxIndex = 0;
    int countRich = 0;
    double totalNalog = 0;

    for (int i = 0; i < n; i++)
    {
        if (net[i] < net[minIndex])
            minIndex = i;
        if (zarplata[i] > zarplata[maxIndex])
            maxIndex = i;
        if (net[i] > 50000)
            countRich++;
        totalNalog += nalog[i];
    }
    cout << "Меньше всех получил работник №" << minIndex + 1 << endl;
    cout << "Максимальная зарплата: " << zarplata[maxIndex] << " руб. (работник №" << maxIndex + 1 << ")" << endl;
    cout << "Количество работников с зарплатой на руки > 50000: " << countRich << endl;
    cout << "Общая сумма налога: " << totalNalog << " руб." << endl;

    return 0;
}