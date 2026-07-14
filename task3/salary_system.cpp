#include <iostream>
using namespace std;

double getSalary(double hours, double rate, double overtime, char position, char bonus)
{
    double salary;

    salary = hours * rate;

    if (position == 'm')
    {
        salary = salary + (overtime * rate);
    }

    if (bonus == 'y')
    {
        salary = salary + 200;
    }

    return salary;
}

double getTax(double salary)
{
    return salary * 0.10;
}

void printInfo(string name, int id, double salary, double tax)
{
    cout << "\n------ Payroll ------\n";
    cout << "Employee: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Salary before TAX: " << salary << endl;
    cout << "TAX: " << tax << endl;
    cout << "Final Salary: " << salary - tax << endl;
}

int main()
{
    string name;
    int id;
    double hours;
    double rate;
    double overtime = 0;
    double salary;
    double tax;
    char position;
    char bonus;

    cout << "Employee name: ";
    getline(cin, name);

    cout << "Employee ID: ";
    cin >> id;

    cout << "Working hours: ";
    cin >> hours;

    cout << "Hourly rate: ";
    cin >> rate;

    do
    {
        cout << "Position (m/e): ";
        cin >> position;
    }
    while (position != 'm' && position != 'e');

    if (position == 'm')
    {
        cout << "Overtime hours: ";
        cin >> overtime;
    }

    cout << "Add bonus? (y/n): ";
    cin >> bonus;

    salary = getSalary(hours, rate, overtime, position, bonus);

    tax = getTax(salary);

    printInfo(name, id, salary, tax);

    return 0;
}
