#pragma once
#include <iostream>
#include <string>

using namespace std;

class User
{
protected:
    string name;
    int userId;

public:
    User(string n, int id);

    virtual void displayInfo() const = 0;

    virtual ~User() {}
};

class Student : public User
{
public:
    Student(string n, int id);
    void displayInfo() const override;
};

class Teacher : public User
{
public:
    Teacher(string n, int id);
    void displayInfo() const override;
};

class Engineer : public User
{
public:
    Engineer(string n, int id);
    void displayInfo() const override;
};
