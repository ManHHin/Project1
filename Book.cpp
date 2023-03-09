#include "Book.hpp"
Book::Book():
    title()
    ,author()
    ,page_count()
    ,digital_form()
{}
Book::Book(std::string title, std::string author, int page_count, bool digital_form = 0):
    title(title)
    ,author(author)
    ,page_count(page_count)
    ,digital_form(digital_form)
{}
void Book::setTitle(const std::string& t){
    title = t;
}
std::string Book::getTitle() const{
    return title;
}
void Book::setAuthor(const std::string& a){
    author = a;
}
std::string Book::getAuthor() const{
    return author;
}
void Book::setPageCount(const int& pc){
    if(pc>0)
        page_count = pc;
}
int Book::getPageCount() const{
    
    return page_count;
}
void Book::setDigital(){
    digital_form = 1;
}
bool Book::isDigital() const{
    return digital_form;
}
void Book::display(const Book& obj){
    if(obj.isDigital()){
        std::cout<<obj.getTitle()<<" written by "<<obj.getAuthor()<<" Page Count: "<<obj.getPageCount()<<" It available digitally."<<std::endl; 
    }
    else
        std::cout<<obj.getTitle()<<" written by "<<obj.getAuthor()<<" Page Count: "<<obj.getPageCount()<<" It is not available digitally."<<std::endl;
}
bool Book::operator ==(const Book& obj1,const Book& obj2){
    return obj2.title == obj1.title && obj2.author == obj1.author && obj2.page_count == obj1.page_count && obj2.digital_form == obj1.digital_form;
}
bool Book::operator !=(const Book& obj1, const Book& obj2){
    return !(obj2 == obj1);
}

