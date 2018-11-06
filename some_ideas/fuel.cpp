#include <iostream>

using namespace std;

int main()
{
    cout << "Введите расстояние:";
    float dist;
    cin >> dist;

    cout << "Введите расход бензина на 100 км:";
    float rashod;
    cin >> rashod;

    cout << "Введите стоимость литра бензина:";
    float price;
    cin >> price;

    float fuel;
    fuel = (dist/100)*rashod;

    float money = fuel * price;

    cout << "Потребуется бензина: " << fuel << "л." << endl;
    cout << "Стоимость всего бензина: " << money << endl;

    return 0;
}
