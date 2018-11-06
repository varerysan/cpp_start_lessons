#include <iostream>

using namespace std;

int main()
{
    const int num = 10;
    int data[num];

    cout << "Введите числа (" << num << ")" << endl;
    for( int k = 0; k < num; k++ )
    {
        cout << "Введите элемент [" << k << "]:";
        cin >> data[k];
    } 
    cout << "Какое значение найти:";
    int value;
    cin >> value;

    int pos;
    bool found = false;
    for( int k = 0; k < num; k++ )
    {
        if( data[k] == value )
        {
            pos = k;
            found = true;
            break;
        }
    }

    if( found )
    {
        cout << "Значение найдено в [" << pos << "]" << endl;
    }
    else
    {
        cout << "Данного значения нет" << endl;
    }

    return 0;
}

