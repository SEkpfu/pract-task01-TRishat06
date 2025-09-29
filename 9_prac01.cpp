#include <windows.h>
#include <iostream>
#include <vector>
using namespace std;
int NaidiMinIndex(vector<double> &arr)
{
    int minIndex = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[minIndex])
            minIndex = i;
    }
    return minIndex;
}
double NaidiMaxElement(vector<double> &arr, int &maxIndex)
{
    maxIndex = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }
    return arr[maxIndex];
}
int countBigger(vector<double> &arr, double value)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > value)
            count++;
    }
    return count;
}
double calculateSum(vector<double> &arr)
{
    double sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    return sum;
}

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
    int minIndex = NaidiMinIndex(net);
    int maxIndex;
    double maxZarplata = NaidiMaxElement(zarplata, maxIndex);
    int countRich = countBigger(net, 50000);
    double totalNalog = calculateSum(nalog);
    cout << "Меньше всех получил работник №" << minIndex + 1 << endl;
    cout << "Максимальная зарплата: " << maxZarplata << " руб. (работник №" << maxIndex + 1 << ")" << endl;
    cout << "Количество работников с зарплатой на руки > 50000: " << countRich << endl;
    cout << "Общая сумма налога: " << totalNalog << " руб." << endl;
    return 0;
}