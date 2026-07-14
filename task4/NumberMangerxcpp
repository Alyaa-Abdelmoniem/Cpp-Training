#include <iostream>
using namespace std;

void increment(int *num)
{
    (*num)++;
}

void decrement(int *num)
{
    (*num)--;
}

void reset(int *num)
{
    *num = 0;
}

void printNumber(int *num)
{
    cout << "Current Number = " << *num << endl;
}

int main()
{
    int number;
    int choice;

    cout << "Enter number: ";
    cin >> number;

    do
    {
        cout << "\n1. Increment" << endl;
        cout << "2. Decrement" << endl;
        cout << "3. Reset" << endl;
        cout << "4. Show Number" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            increment(&number);
            break;

        case 2:
            decrement(&number);
            break;

        case 3:
            reset(&number);
            break;

        case 4:
            printNumber(&number);
            break;

        case 5:
            cout << "Good Bye!" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}
