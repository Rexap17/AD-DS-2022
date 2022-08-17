#include <iostream>
#include <string>

#include "Library.h"
#include "Document.h"
#include "Book.h"

using namespace std;

int main(){

    Library L1;

    string name, author;

    name = "I am Book";
    author = "Definitely not a book";
    
    Book B1(name,author);
    L1.addDocument(B1);
    cout << L1.hasDocument(B1) << endl;

    return 0;
}