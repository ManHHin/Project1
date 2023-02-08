/*Manhin
Cs235
Dr.Tiziana Ligorio
Project 1
*/

#ifndef BOOK_H
#define BOOK_H
#include<string>

class Book
{
    private:
    //private member data variableas
        std::string title;
        std::string author;
        int page_count;
        bool digital_form = 0;

    public:
    
    //Default constructor.
    //Default-initializes all private members. Booleans are default-initialized to False.
        Book();
        Book(std::string title, std::string author, int page_count, bool digital_form = 0);
        
    
    //@param  : the title of the Book
    //@post   : sets the Book's title to the value of the parameter
      void setTitle(const std::string& t);
    //@return : the title of the Book
        std::string getTitle() const;
    //@param  : the name of the author of the Book
    //@post   : sets the Book's author to the value of the parameter
        void setAuthor(const std::string& a);
    //@return : the author of the Book
        std::string getAuthor() const;
    //@param  : a positive integer page count
    //@pre    : page count > 0 - books cannot have a negative number of pages
    //@post   : sets the page count to the value of the parameter    
        void setPageCount(const int& pc);
    //@return : the page count
        int getPageCount() const;
    //@post   : sets the digital flag to true
        void setDigital();
    //@return true if the book is available in digital form, false otherwise
        bool isDigital() const;


};
#endif