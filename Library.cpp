#include <iostream>
#include "Library.h"
#include "Book.h"

using namespace std;

Library::Library(){};

// Adds new book into system
void Library::addDocument(Book B1){
    
};

// Return value if book is in system
string Library::hasDocument(Book B1){
    string name, author,result;
    name = B1.bookName;
    author = B1.bookAuthor;
    result = name + ", " + author;
    return result;
};

Library::~Library(){};