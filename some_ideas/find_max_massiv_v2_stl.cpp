#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> data;
    const int num = 10;
    cout << "Введите числа" << endl;
    for( int k = 0; k < num; k++ )
    {
        int value;
        cin >> value;
        data.push_back(value);
    }

    auto max_pos = max_element(data.begin(), data.end());

    float max_val = *max_pos;
    cout << "max value = " << max_val << endl;

    return 0;
}
