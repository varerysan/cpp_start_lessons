#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Введитие первое число:" << endl;
    cin >> a;

    cout << "Введитие второе число:" << endl;
    cin >> b;

    cout << "Введитие третье число:" << endl;
    cin >> c;

    if( a > b && a > c )
    {
        cout << "Первое число максимально" << endl;
    }
    else if( b > a && b > c )
    {
        cout << "Второе число максимально" << endl;
    }
    else if( c > a && c > b )
    {
        cout << "Третье число максимально" << endl;
    }
    else
    {
        cout << "Максимального числа нет" << endl;
    }

    return 0;
}


