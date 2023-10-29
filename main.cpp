#include <iostream>
#include <string>

using namespace std;

int main()
{
    string user_name;
    string entered_pass;
    string pass = "shrimp";

    cout << "enter user name: \n";
    cin >> user_name;
    if (user_name == "test_acc_0")
    {
        cout << "enter password:\n";
        cin >> entered_pass;
        if (entered_pass == pass)
        {
            cout << "Hello Dev" << user_name << ", Welcome to a purgatory of your own making\n";

            system("PAUSE");
            return 0;
        }
        else
        {
            cout << "incorect password \n";

            system("PAUSE");
            return 0;
        }
    }
    else
    {
        cout << "sorry, this account does not exist\n";

        system("PAUSE");
        return 0;
    }

    system("PAUSE");
    return 0;
}