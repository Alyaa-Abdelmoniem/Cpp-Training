#include <iostream>
#include "Library.h"
#include "Book.h"
#include "User.h"

using namespace std;

int main()
{
    Library library;

    Book b1("Clean Code", "Robert Martin", 101);
    Book b2("C++ Primer", "Lippman", 102);
    Book b3("Design Patterns", "GoF", 103);

    Student s1("Ali", 1);
    Teacher t1("Dr. Hassan", 2);
    Engineer e1("Mona", 3);

    library.addBook(&b1);
    library.addBook(&b2);
    library.addBook(&b3);

    library.addUser(&s1);
    library.addUser(&t1);
    library.addUser(&e1);

    int choice;

    do
    {
        cout << "\n========== Library Management System ==========\n";
        cout << "1. Display Books\n";
        cout << "2. Display Users\n";
        cout << "3. Borrow Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            library.showBooks();
            break;

        case 2:
            library.showUsers();
            break;

        case 3:
        {
            int id;
            cout << "Enter Book ID: ";
            cin >> id;

            if (id == 101)
                b1.borrowBook();
            else if (id == 102)
                b2.borrowBook();
            else if (id == 103)
                b3.borrowBook();
            else
                cout << "Book not found.\n";

            break;
        }

        case 4:
        {
            int id;
            cout << "Enter Book ID: ";
            cin >> id;

            if (id == 101)
                b1.returnBook();
            else if (id == 102)
                b2.returnBook();
            else if (id == 103)
                b3.returnBook();
            else
                cout << "Book not found.\n";

            break;
        }

        case 5:
            cout << "Thank you for using the Library Management System.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}
