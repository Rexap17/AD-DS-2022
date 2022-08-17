#include <iostream>
#include "Book.h"

using namespace std;

Book::Book(string name, string author){
    bookName = name;
    bookAuthor = author;
    ID = 1;
};

string Book::getName(){
    return bookName;
};

Book::~Book(){};