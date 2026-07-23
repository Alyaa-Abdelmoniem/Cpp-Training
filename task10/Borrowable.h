#pragma once

class Borrowable
{
public:
    virtual void borrowBook() = 0;
    virtual void returnBook() = 0;
    virtual bool isAvailable() const = 0;

    virtual ~Borrowable() {}
};
