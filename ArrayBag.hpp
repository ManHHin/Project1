/*Manhin
Cs235
Dr.Tiziana Ligorio
Project 3
*/
#ifndef ARRAY_BAG_H
#define ARRAY_BAG_H
#include <vector>
template<class T>

class ArrayBag
{
    public:
    ArrayBag();
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add(const T& newEntry);
    bool remove(const T& anEntry);
    void clear();
    bool contains(const T& anEntry) const;
    int getFrequencyOf(const T& anEntry) const;
    std::vector<T> toVector() const;
    void operator +=(const T& obj) const;
    void operator /=(const T& obj) const;

    private:
    static const int DEFAULT_CAPACITY = 200;
    T items_[DEFAULT_CAPACITY];
    int itemCount_;
    int getIndexOf(const T& target) const;

};
//#include "ArrayBag.cpp"
#endif