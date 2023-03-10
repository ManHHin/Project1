/*Manhin
Cs235
Dr.Tiziana Ligorio
Project 3
*/
#ifndef LIBRARY_RECORD_H
#define LIBRARY_RECORD_H
#include "ArrayBag.hpp"
#include "Book.hpp"
#include <vector>
#include <iostream>

class LibraryRecord : public ArrayBag<Book>
{
    private: 
    
    std::vector<Book> check_out_books;
    
    public:
    LibraryRecord();
    bool checkIn(const Book& obj);
    bool checkOut(const Book& obj);
    int getCheckOutHistory(const Book& obj);
    void display() const;
    void displayTitles() const;
    bool duplicateStock() const;
    bool removeStock(const Book& obj);
    bool equivalentRecords(const LibraryRecord& obj);
    void operator +=(const LibraryRecord& obj) const;
    void operator /=(const LibraryRecord& obj) const;

    


}
#endif