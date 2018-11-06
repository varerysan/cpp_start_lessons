#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string,string> passData = { {"user","123"}, {"admin","pass"} };

    string login;
    cout << "Login:";
    cin >> login;

    cout << "Password:";
    string password;
    cin >> password;

    auto result = passData.find(login);
    if( result != passData.end() &&  result->second == password )
    {
        cout << "Доступ разрешен" << endl;
    }
    else
    {
        cout << "Доступ закрыт" << endl;
    }
    
    return 0;
}

