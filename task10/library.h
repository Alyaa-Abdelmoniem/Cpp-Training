#pragma once
#include <vector>
#include "Book.h"
#include "User.h"

using namespace std;

class Library
{
private:
    vector<Book*> books;
    vector<User*> users;

public:
    void addBook(Book* b);
    void addUser(User* u);

    void showBooks() const;
    void showUsers() const;
};
