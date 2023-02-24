/*Manhin
Cs235
Dr.Tiziana Ligorio
Project 2
*/
#ifndef MANUAL_H
#define MANUAL_H
#include "Book.hpp"
#include<string>

class Manual : public Book
{
    private:
        std::string url;
        std::string device_name;
        bool visual_aid;
        bool website;
    
    public:
        Manual();
        Manual(std::string title, std::string author, int page_count, std::string device_name, bool digital_form, std::string u, bool visual_aid = 0);
        void setDevice(const std::string& d_name);
        std::string getDevice() const;
        bool setWebsite(const std::string& url_2);
        std::string getWebsite() const;
        void setVisualAid(const bool& v_aid);
        bool hasVisualAid() const;
        bool hasWebsite() const;




};
#endif 
