#pragma once
#include <iostream>
#include <string>
#include "Borrowable.h"

using namespace std;

class Book : public Borrowable
{
private:
    string title;
    string author;
    int bookId;
    bool available;

public:
    Book(string t, string a, int id);

    void borrowBook() override;
    void returnBook() override;
    bool isAvailable() const override;

    void displayBook() const;
    int getId() const;
};
