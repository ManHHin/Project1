#include "Book.hpp"

Book::Book()
    :title()
    ,author()
    ,page_count()
    ,digital_form()
{}
Book::Book(string title, string author, int page_count)
    :title(title)
    ,author(author)
    ,page_count(page_count)
{}
Book::Book(string title, string author, int page_count, bool digital_form)
    :title(title)
    ,author(author)
    ,page_count(page_count)
    ,digital_form(digital_form)
{}
void Book::setTitle(string t){
    title = t;
}
string Book::getTitle(){
    return title;
}
void Book::setAuthor(string a){
    author = a;
}
string Book::getAuthor(){
    return author;
}
void Book::setPageCount(int pc){
    if(pc>0)
        page_count = pc;
    
}
int Book::getPageCount(){
    if(page_count>0)
        return page_count;
    
}
void Book::setDigital(){
    digital_form = 1;
}
bool Book::isDigital(){
    return digital_form;
}
