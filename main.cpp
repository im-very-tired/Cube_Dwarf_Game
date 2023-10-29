#include <iostream>
#include <string>

using namespace std;

int main()
{
    string user_name;

    cout << "enter user name: \n";
    cin >> user_name;
    if (user_name == "test_acc_0")
    {
        cout << "Hello Dev" << user_name << ", Welcome to a purgatory of your own making\n";
    }
    else
    {
        cout << "Hello " << user_name << ", Welcome\n";
    }

    system("PAUSE");
    return 0;
}