#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <iostream>

#include <array>

using namespace std;

class Document {

    protected:
        int ID;
    public:
        Document();
        virtual int getDocumentID();
        ~Document();
};

#endif