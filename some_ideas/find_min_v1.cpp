#include <iostream>

using namespace std;

int main()
{
    float a;
    cout << "Введите первое число:";
    cin >> a;

    float b;
    cout << "Введите втрое число:";
    cin >> b;

    if ( a > b )
    {
        cout << "Первое число больше" << endl;
    }
    else if( a < b )
    {
        cout << "Второе число больше" << endl;
    }
    else
    {
        cout << "Числа равны" << endl;
    }

    return 0;
}

