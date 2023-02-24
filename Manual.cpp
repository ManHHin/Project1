/*Manhin
Cs235
Dr.Tiziana Ligorio
Project 2
Book-subclasses: Manual.
*/
#include "Manual.hpp"
/**
  Default constructor.
  Default-initializes all private members.
*/
Manual::Manual():
    url(" "),
    device_name(" "),
    visual_aid(0),
    website(0)
{}
/**
  Parameterized constructor.
  @param: The title of the book (a string)
  @param: The author of the book (a string)
  @param: The number of pages in the book (a positive integer)
  @param: The name of the device (a string)
  @param: A flag indicating whether the book is in digital form with DEFAULT VALUE False (a Boolean)
  @param: The URL that is in the format'https://www.something.something'or 'http://www.something.something' 
  with the last 'something' being at least 2 characters 
  with DEFAULT VALUE empty string (a string)
  @param: A Boolean indicating the presence of a visual aid with DEFAULT VALUE False
  @post: The private members are set to the values of the corresponding parameters. 
  If a URL is provided, the website flag is set to True.
  If the URL is ill-formatted, the website is set to
  empty string and the website flag is set to False.
*/
Manual::Manual(std::string title, std::string author, int page_count,std::string d_name, bool digital_form, std::string u, bool v_aid):
  Book(title, author, page_count, digital_form),
  device_name(d_name),
  url(u),
  visual_aid(v_aid)

{
  if(!url.empty()){
    const std::regex pattern("((http|https)://)(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");
    if(!std::regex_match(url,pattern)){
      url = " ";
      website = 0;
    }
    else{
      website = 1;
    }
  }
  else {
    website = 0;
  }
}
/**
  @param: a reference to a string representing the device
  @post: sets the private member variable to the value of the parameter
**/
void Manual::setDevice(const std::string& d_name){
  device_name = d_name;

}
/**
  @return: the variable indicating the device the manual is for
**/
std::string Manual::getDevice() const{
  return device_name;
}
/**
  @param: a reference to a website link (string) that is in the format
  'https://www.something.something' or 'http://www.something.something'
  with the last 'something' being at least 2 characters
  @return: has_website_ flag (a boolean)
  @post: If the link is not correctly formatted, 
  store "Broken Link" in the link member variable (see <regex>)
  and either way set the has website flag to True
**/
bool Manual::setWebsite(const std::string& u){
  const std::regex pattern("((http|https)://)(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");
  if(u.empty()){
    website = 0;
  }
  if(std::regex_match(u,pattern)){
      url = u;
      website = 1;
  }
  else{
    url = "Broken Link";
    website = 1;
  }
  return website;
}
/**
  @return: the url for the website
**/
std::string Manual::getWebsite() const{
  return url;
}
/**
  @param: a reference to boolean
  @post: sets the private member variable indicating the presence of a visual aid 
  to the value of the parameter
**/
void Manual::setVisualAid(const bool& v_aid ){
  visual_aid = v_aid;
}
/**
  @return: the visual aid flag
**/
bool Manual::hasVisualAid() const{
  return visual_aid;
}
/**
  @return: the has website flag
**/
bool Manual::hasWebsite() const{
  return website;
}
