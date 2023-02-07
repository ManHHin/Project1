/*Manhin
Cs235
Dr.Tiziana Ligorio
Project 1
*/
#include<string>
using namespace std;

class Book
{
    private:
    //private member data variableas
        string title;
        string author;
        int page_count;
        bool digital_form;

    public:
    
    //Default constructor.
    //Default-initializes all private members. Booleans are default-initialized to False.
        Book();
        Book(string title, string author, int page_count, bool digital_form);
        
    
    //@param  : the title of the Book
    //@post   : sets the Book's title to the value of the parameter
      void setTitle(const string& t);
    //@return : the title of the Book
        string getTitle() const;
    //@param  : the name of the author of the Book
    //@post   : sets the Book's author to the value of the parameter
        void setAuthor(const string& a);
    //@return : the author of the Book
        string getAuthor() const;
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