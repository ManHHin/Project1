/*Manhin
Cs235
Dr.Tiziana Ligorio
Project 3
*/
#ifndef LIBRARY_RECORD_H
#define LIBRARY_RECORD_H
#include "ArrayBag.hpp"
#include "Book.hpp"
class LibraryRecord : public ArrayBag<class T>
{
    private: 
    
    std::vector<Book> check_out_books;
    
    public:
    LibraryRecord();
    bool checkIn(const Book.obj);
    bool checkOut(const Book.obj);
    int getCheckOutHistory(const Book.obj) const;
    void display() const;
    void displayTitles() const;
    bool duplicateStock() const;
    bool removeStock(const Book.obj);
    bool equivalentRecords(const LibraryRecord.obj);
    void operator +=(const LibraryRecord.obj);
    void operator /=(const LibraryRecord.obj);

    


}
#endif