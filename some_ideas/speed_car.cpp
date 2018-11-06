#include <iostream>

using namespace std;

int main()
{
    float dist;
    cout << "Введите расстояние:";
    cin >> dist;

    float speed;
    cout << "Введите расстояние:";
    cin >> speed;

    float time;
    time = dist / speed;
    cout << "Потребуется времени: " << time << endl;
    return 0;
}
