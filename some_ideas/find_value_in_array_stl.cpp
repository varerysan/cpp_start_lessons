#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> data;
    const int num = 10;
    cout << "Введите числа (" << num << "):" << endl;
    for( int k = 0; k < num; k++ )
    {
        int value;
        cout << "Введите элемент [" << k << "]:";
        cin >> value;
        data.push_back(value);
    }

    cout << "Какое значение найти:";
    int value;
    cin >> value;
    
    auto pos = find(data.begin(), data.end(), value);

    if( pos != data.end() )
    {
        cout << "Значение найдено" << endl;
    }
    else
    {
        cout << "Данного значения нет" << endl; 
    }

    return 0;
}

