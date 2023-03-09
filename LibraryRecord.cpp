/*Manhin
Cs235
Dr.Tiziana Ligorio
Project 3
*/
#include "LibraryRecord.hpp"
#include <iostream>


LibraryRecord::LibraryRecord(){}

bool LibraryRecord::checkIn(const Book.obj){
    return add(obj.items_);
}

bool LibraryRecord::checkOut(const Book.obj){
    if(remove(obj.items_)){
        check_out_Books.push_back(obj);
    }
}

int getCheckOutHistory(const Book.obj) const{
    int count = 0;
    for(int i=0;i<check_out_books.size()){
        if(operator ==(check_out_books[i],obj)){
            count++;
        }

    }
    return count;
}
void LibraryRecord::display() const{

    for(int i=0;i<check_out_books.size();i++){
        std::cout<<check_out_books[i].title<< " is written by "<<check_out_books[i].author<<". Page Count: "<<check_out_books[i].page_count;
        if(check_out_books[i].isDigital()){
            std::cout<<". It is available digitally."<<std::endl;
        }
        else{
            std::cout<<". It is not available digitally."<<std::endl;
        }
    }
}

void LibraryRecord::displayTitles()const{
    for(int i=0;i<check_out_books.size();i++){
        std::cout<<check_out_books[i].getTitle();
        if(i==check_out_books.size()-1){
            std::cout<<"!";
        }
        else{
            std::cout<<", ";
        }
    }
}

bool LibraryRecord::duplicateStock(const Book.obj){
    return operator+=(obj);
}

bool LibraryRecord::removeStock(const Book.obj){
    return remove(obj);
}

bool LibraryRecord::equivalentRecords(const LibraryRecord.obj){
    
}

void LibraryRecord::operator +=(const LibraryRecord.obj){
    for(int i=0;i<obj.getCurrentSize(); i++){
        add(obj.items_[i]);
    }
    for(int j=0;j<check_out_books.size();j++){
        check_out_books.push_back(obj.check_out_books[i]);
    }
}
void LibraryRecord::operator /=(const LibraryRecord.obj){
    for(int i=0; i < obj.getCurrentSize(); i++){
            if(getFrequencyOf(obj.items_[i]==0)){
            add(obj.items_[i]);
            }
        }
    for(int j=0;j<check_out_books.size();j++){
        check_out_books.push_back(obj.check_out_books[i]);
    }

}