#include "Manual.hpp"
Manual::Manual():
    url(),
    device_name(),
    visual_aid(),
    website()
{}
Manual::Manual(std::string title, std::string author, int page_count, std::string d_name , bool digital_form , std::string u, bool visual_aid):
    Book(title, author, page_count, digital_form),
    device_name(d_name),
    url(u),
    visual_aid(visual_aid)

{
    if(!setWebsite(u)){
        url = "";
    }

}
void Manual::setDevice(const std::string& d_name){
    device_name = d_name;

}
std::string Manual::getDevice() const{
    return device_name;
}
bool Manual::setWebsite(const std::string& url2){
    if(url2.empty()){
        
        website = 0;
    }
    int dot_count = 0;
    for(int i=0;i<url2.length();i++){
        if(url2[i]=='.'){
            dot_count++;
        }
    }
    if(dot_count == 2){
        int first = url2.find_first_of('.');
        int last = url2.find_last_of('.');
        if(last - first > 1){
            std::string firstp = url2.substr(0,first+1);
            std::string lastp = url2.substr(last+1,url2.length()-1-1);
            if((firstp == "http://www." || firstp == "https://www." ) && (lastp.length() > 1)){
                url = url2;
                website = true;
            }
            else{
                url = "Broken link";
                website = true;
            }

        }
    }
    return website;
}
std::string Manual::getWebsite() const{
    return url;
}
void Manual::setVisualAid(const bool& v_aid ){
    visual_aid = v_aid;
}
bool Manual::hasVisualAid() const{
    return visual_aid;
}
bool Manual::hasWebsite() const{
    return website;
}


 