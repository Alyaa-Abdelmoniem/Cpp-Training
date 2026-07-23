#include "Book.h"

Book::Book(string t, string a, int id)
{
    title = t;
    author = a;
    bookId = id;
    available = true;
}

void Book::borrowBook()
{
    if (available)
    {
        available = false;
        cout << "Book borrowed successfully.\n";
    }
    else
    {
        cout << "Book is not available.\n";
    }
}

void Book::returnBook()
{
    if (!available)
    {
        available = true;
        cout << "Book returned successfully.\n";
    }
    else
    {
        cout << "This book is already in library.\n";
    }
}

bool Book::isAvailable() const
{
    return available;
}

void Book::displayBook() const
{
    cout << "Book ID : " << bookId << endl;
    cout << "Title   : " << title << endl;
    cout << "Author  : " << author << endl;

    if (available)
        cout << "Status  : Available\n";
    else
        cout << "Status  : Borrowed\n";

    cout << "-----------------------------\n";
}

int Book::getId() const
{
    return bookId;
}
