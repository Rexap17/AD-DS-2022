#ifndef BOOK_H
#define BOOK_H
#include <iostream>

#include <array>
#include "Document.h"

using namespace std;

class Book:public Document{

    protected:
        string bookName, bookAuthor;
    public:
        Book(string,string);
        string getName();
        ~Book();
};

#endif