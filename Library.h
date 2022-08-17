#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>

#include "Book.h"

using namespace std;

class Library {

    private:

    public:
        Library();
        void addDocument(Book B1);
        string hasDocument(Book B1);
        ~Library();
};

#endif