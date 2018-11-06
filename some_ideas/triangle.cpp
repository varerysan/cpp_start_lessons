#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Введите длину первого отрезка:";
    cin >> a;

    cout << "Введите длину второго отрезка:";
    cin >> b;

    cout << "Введите длину третьего отрезка:";
    cin >> c;

    if( a < b + c && b < a + c && c < a + b )
    {
        cout << "Из этих отрезков можно построить треугольник" << endl;
    }
    else
    {
        cout << "Из этих отрезков нельзя построить треугольник" << endl;
    }

    return 0;
}
