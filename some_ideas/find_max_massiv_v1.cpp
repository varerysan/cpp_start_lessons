#include <iostream>

using namespace std;

int main()
{
    const int num = 10;
    int data[num];
    cout << "Введити значения" << endl;
    for( int k = 0; k < num; k++ )
    {
        cin >> data[k];
    }
    
    cout << "---------------" << endl;

    float max = data[0];
    for( int k = 1; k < num; k++ )
    {
        if( data[k] > max )
        {
            max = data[k];
        }
    }

    cout << "Максимальное значение:" << max << endl;

    return 0;
}

