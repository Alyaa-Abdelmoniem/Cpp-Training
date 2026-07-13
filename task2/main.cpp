#include <iostream>
using namespace std;

int main()
{
    int choice;
    double money = 1000;
    double num;

    do
    {
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit";
        cout << "\n3. Withdraw";
        cout << "\n4. Exit";
        cout << "\nChoose: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Balance = " << money << endl;
            break;

        case 2:
            cout << "Enter amount: ";
            cin >> num;

            money = money + num;

            cout << "Balance = " << money << endl;
            break;

        case 3:
            cout << "Enter amount: ";
            cin >> num;

            if (num <= money)
            {
                money = money - num;
                cout << "Balance = " << money << endl;
            }
            else
            {
                cout << "Not enough money.\n";
            }
            break;

        case 4:
            cout << "Bye\n";
            break;

        default:
            cout << "Wrong choice.\n";
        }

    } while (choice != 4);

    return 0;
}
