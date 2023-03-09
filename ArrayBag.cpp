/*Manhin
Cs235
Dr.Tiziana Ligorio
Project 3
*/
#include "ArrayBag.hpp"

template<class T>
ArrayBag<T>::ArrayBag(): itemCount_(0)
{}

template <class T>
int ArrayBag<T>::getCurrentSize() const{
   
    return itemCount_;
}

template <class T>
bool ArrayBag<T>::isEmpty() const{
    
    return itemCount_ == 0;
}

template <class T>
bool ArrayBag<T>::add(const T& newEntry){
    
    bool has_room_to_add = (itemCount_ < DEFAULT_CAPACITY);
    if(has_room_to_add){
        
        items_[itemCount_] = newEntry;
        itemCount_++;
    }
    return has_room_to_add;
}

template <class T>
bool ArrayBag<T>::remove(const T& anEntry){
   
    int located_index = getIndexOf(anEntry);
    bool can_remove_item = !isEmpty() && (located_index > -1);
    if(can_remove_item){

        itemCount_--;
        items_[located_index] = items_[itemCount_];
    }

    return can_remove_item;
}

template <class T>
int ArrayBag<T>::getFrequencyOf(const T& anEntry) const{

    int frequency = 0;
    int current_index = 0;
    while(current_index < itemCount_){

        if(items_[current_index] == anEntry){

            frequency++;
        }
        current_index++;
    }
    return frequency;

}

template <class T>
std::vector<T> ArrayBag<T>::toVector() const{

    std::vector<T> bagContents;
    for(int i = 0; i < itemCount_; i++){
        bagContents.push_back(items_[i]);
    }
    return bagContents;
}

template <class T>
void ArrayBag<T>::operator +=(const T& obj){
    bool has_room = (obj.getCurrentSize() < DEFAULT_CAPACITY);
    if(has_room){
        for(int i=0; i < obj.getCurrentSize(); i++){
            add(obj.items_[i]);
        }
    }
    
}

template <class T>
void ArrayBag<T>::operator /=(const T& obj){
    bool has_room = (obj.getCurrentSize() < DEFAULT_CAPACITY);
    if(has_room){
        for(int i=0; i < obj.getCurrentSize(); i++){
            if(getFrequencyOf(obj.items_[i]==0)){
            add(obj.items_[i]);
            }
        }
            
    }
}

//private
template <class T>
int ArrayBag<T>::getIndexOf(const T& target) const{

    bool found = false;
    int result = -1;
    int search_index = 0;

    while(!found && (search_index < itemCount_)){

        if(items_[search_index] == target){
            
            found = true;
            result = search_index;
        }
        else{
            search_index++;
        }

    }
    return result;
}

template <class T>
void ArrayBag<T>::clear(){
    
    itemCount_ = 0;
}

template <class T>
bool ArrayBag<T>::contains(const T& anEntry) const{

    return getIndexOf(anEntry) > -1;
}
