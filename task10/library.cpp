#include "Library.h"

void Library::addBook(Book* b)
{
    books.push_back(b);
}

void Library::addUser(User* u)
{
    users.push_back(u);
}

void Library::showBooks() const
{
    cout << "\n========== Books ==========\n\n";

    for (Book* b : books)
    {
        b->displayBook();
    }
}

void Library::showUsers() const
{
    cout << "\n========== Users ==========\n\n";

    for (User* u : users)
    {
        u->displayInfo();
    }
}
