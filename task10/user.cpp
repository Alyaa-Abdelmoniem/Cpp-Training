#include "User.h"

User::User(string n, int id)
{
    name = n;
    userId = id;
}

Student::Student(string n, int id)
    : User(n, id)
{
}

void Student::displayInfo() const
{
    cout << "Student\n";
    cout << "Name : " << name << endl;
    cout << "ID   : " << userId << endl;
    cout << "-----------------------------\n";
}

Teacher::Teacher(string n, int id)
    : User(n, id)
{
}

void Teacher::displayInfo() const
{
    cout << "Teacher\n";
    cout << "Name : " << name << endl;
    cout << "ID   : " << userId << endl;
    cout << "-----------------------------\n";
}

Engineer::Engineer(string n, int id)
    : User(n, id)
{
}

void Engineer::displayInfo() const
{
    cout << "Engineer\n";
    cout << "Name : " << name << endl;
    cout << "ID   : " << userId << endl;
    cout << "-----------------------------\n";
}
