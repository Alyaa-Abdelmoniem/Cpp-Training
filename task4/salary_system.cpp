#include <iostream>
#include <string>
using namespace std;

void inputMarks(int *math, int *physics, int *english)
{
    cout << "Enter Math mark: ";
    cin >> *math;

    cout << "Enter Physics mark: ";
    cin >> *physics;

    cout << "Enter English mark: ";
    cin >> *english;
}

double calculateAverage(int *math, int *physics, int *english)
{
    return (*math + *physics + *english) / 3.0;
}

char calculateGrade(double average)
{
    if (average >= 90)
        return 'A';
    else if (average >= 80)
        return 'B';
    else if (average >= 70)
        return 'C';
    else if (average >= 60)
        return 'D';
    else
        return 'F';
}

void printReport(string name, int *math, int *physics, int *english)
{
    double average = calculateAverage(math, physics, english);
    char grade = calculateGrade(average);

    cout << "\n----- Student Report -----" << endl;
    cout << "Name: " << name << endl;
    cout << "Math: " << *math << endl;
    cout << "Physics: " << *physics << endl;
    cout << "English: " << *english << endl;
    cout << "Average: " << average << endl;
    cout << "Grade: " << grade << endl;
}

int main()
{
    string name;
    int math, physics, english;
    int choice;

    cout << "Enter student name: ";
    getline(cin, name);

    inputMarks(&math, &physics, &english);

    do
    {
        cout << "\n1. Print Report" << endl;
        cout << "2. Update Math" << endl;
        cout << "3. Update Physics" << endl;
        cout << "4. Update English" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            printReport(name, &math, &physics, &english);
            break;

        case 2:
            cout << "Enter new Math mark: ";
            cin >> math;
            break;

        case 3:
            cout << "Enter new Physics mark: ";
            cin >> physics;
            break;

        case 4:
            cout << "Enter new English mark: ";
            cin >> english;
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
