/*Manhin
Cs235
Dr.Tiziana Ligorio
Project 2
Book-subclasses: Manual.
*/
#ifndef MANUAL_H
#define MANUAL_H
#include <string>
#include <regex>
#include "Book.hpp"

class Manual : public Book
{
    private:
    //private member data variables
        std::string url;
        std::string device_name;
        bool visual_aid;
        bool website;
    
    public:
    //Default constructor.
    //Default-initializes all private members. Booleans are default-initialized to False.
        Manual();
        Manual(std::string title, std::string author, int page_count, std::string device_name, bool digital_form = 0, std::string u = " ", bool visual_aid = 0);
        
    //Unique Methods
    //Accessor and Mutator functions
        void setDevice(const std::string& d_name);
        std::string getDevice() const;
        bool setWebsite(const std::string& url_2);
        std::string getWebsite() const;
        void setVisualAid(const bool& v_aid);
        bool hasVisualAid() const;
        bool hasWebsite() const;




};
#endif 
