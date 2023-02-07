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
        string title;
        string author;
        int page_count;
        bool digital_form;

    public:
        Book();
        Book(string title, string author, int page_count, bool digital_form);
        void setTitle(const string& t);
        string getTitle() const;
        void setAuthor(const string& a);
        string getAuthor() const;
        void setPageCount(const int& pc);
        int getPageCount() const;
        void setDigital();
        bool isDigital() const;


};
