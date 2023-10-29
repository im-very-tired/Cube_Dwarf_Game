#include <iostream>
#include <string>

using namespace std;

int main()
{
//vars

    string user_name;
    string entered_pass;
    string pass = "shrimp";

    int day = 1;

    cout << "enter user name: \n";// might keep the space in username
    cin >> user_name;//read entered username
    if (user_name == "test_acc_0")
    {
        cout << "enter password:\n";
        cin >> entered_pass;
        if (entered_pass == pass)//password checker
        {
            cout << "Hello Dev" << user_name << ", Welcome to a purgatory of your own making\n";

            while (day != 10)
            {
                cout << day << endl;
                day++;
            }

            system("PAUSE"); //end program
            return 0;
        }
        else
        {
            cout << "incorect password \n";

            system("PAUSE"); //end program
            return 0;
        }
    }
    else
    {
        cout << "sorry, this account does not exist\n";

        system("PAUSE"); //end program
        return 0;
    }
}