/*Manhin
Cs235
Dr.Tiziana Ligorio
Project 3
*/
#include "LibraryRecord.hpp"


LibraryRecord::LibraryRecord(){}

bool LibraryRecord::checkIn(const Book& obj){
    return add(obj);
}

bool LibraryRecord::checkOut(const Book& obj){
    if(remove(obj)){
        check_out_books.push_back(obj);
        return true;
    }
    else{
        return false;
    }
}

int LibraryRecord::getCheckOutHistory(const Book& obj){
    int count = 0;
    for(int i=0;i<check_out_books.size();i++){
        if(check_out_books[i]==obj){
            count++;
        }

    }
    return count;
}
void LibraryRecord::display() const{
    int count = 0;
    for(int i=0;i<check_out_books.size();i++){
        std::cout<<check_out_books[i].getTitle()<< " is written by "<<check_out_books[i].getAuthor()<<". Page Count: "<<check_out_books[i].getPageCount();
        if(check_out_books[i].isDigital()){
            std::cout<<". It is available digitally."<<std::endl;
        }
        else{
            std::cout<<". It is not available digitally."<<std::endl;
        }
        count++;
    }
    std::cout<<"It has been checked out "<<count<<" times.\n";

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

bool LibraryRecord::duplicateStock() const{
    return false;
}

bool LibraryRecord::removeStock(const Book& obj){
    return remove(obj);
}

bool LibraryRecord::equivalentRecords(const LibraryRecord& obj){
    return false;
}

// void LibraryRecord::operator +=(const LibraryRecord& obj) const{
//     for(int i=0;i<obj.getCurrentSize(); i++){
//         add(obj);
//     }
//     for(int j=0;j<check_out_books.size();j++){
//         check_out_books.push_back(obj.check_out_books[j]);
//     }
// }
// void LibraryRecord::operator /=(const LibraryRecord& obj) const{
//     for(int i=0; i < obj.getCurrentSize(); i++){
//             if(getFrequencyOf(obj.items_[i]==0)){
//             add(obj);
//             }
//         }
//     for(int j=0;j<check_out_books.size();j++){
//         check_out_books.push_back(obj.check_out_books[j]);
//     }

// }