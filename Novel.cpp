/*Manhin
Cs235
Dr.Tiziana Ligorio
Project 2
Book-subclasses: Novel.
*/

#include "Novel.hpp"
/**
  Default constructor.
  Default-initializes all private members.
*/
Novel::Novel():
    genre(" "),
    characters_list(),
    review_rating(),
    rating_point(0.0),
    film_Adap(0)
{}
/**
  Parameterized constructor.
  @param: The title of the book (a string)
  @param: The author of the book (a string)
  @param: The number of pages in the book (a positive integer)
  @param: The genre of the novel (a string)
  @param: A flag indicating whether the book is in digital form with DEFAULT VALUE False (a Boolean)
  @param: A flag indicating whether there is a film adaptation for this novel with DEFAULT VALUE False (a Boolean)
*/
Novel::Novel(std::string title, std::string author, int page_count, std::string genre,bool digital_form, bool film_Adap):
    Book(title, author, page_count, digital_form),
    genre(genre),
    film_Adap(film_Adap)
{}
/**
  @return: the value of the genre private member
**/
std::string Novel::getGenre() const{
    return genre;
}
/**
  @param: a reference to string indicating the genre of the book
  @post: sets genre_ private member to the value of the parameter
**/
void Novel::setGenre(const std::string& novelGenre){
    genre = novelGenre;
}
/**
  @return: the vector containing the list of characters for this novel
**/
std::vector<std::string> Novel::getCharacterList() const{
    return characters_list;
}
/**
  @return: a string of all the characters in thecharacter_list_ private member, 
  concatenated and separated by a space " " . For example: "character1 character2 character3"
**/
std::string Novel::getCharacterListString() const{
    
    std::string sentence = "";
    for(int i = 0;i<characters_list.size();i++){
        sentence += characters_list[i] + " ";
    }
    return sentence;
}
/**
  @param: a reference to string indicating a character
  @post: inserts the character into the character_list_ vector
**/
void Novel::addCharacter(const std::string& characters_name){
    characters_list.push_back(characters_name);
}
/**
  @return: the value of the film_adaptation_ private member
**/
bool Novel::hasFilmAdaptation() const{
    return film_Adap;
}
/**
  @post: sets has_film_adaptation_ private member to true
**/
void Novel::setFilmAdaptation(){
    film_Adap = 1;
}
/**
  @return: the value of the average rating private member
**/
double Novel::getAverageRating() const{
    return rating_point;
}
/**
  @param: a reference to floating point number (double) indicating the score of the  review
  @param: a reference to string indicating the rating of the review
  @return: creates and returns a review data type with score and rating as indicated by the parameters
*/
review Novel::createReview(const double& rating_score, std::string rating_reviews){
    review someRating;
    someRating.score_ = rating_score;
    someRating.rating_ = rating_reviews;

    return someRating;
}
/**
  @param: a reference to review object
  @post: inserts the review argument into the reviews_ vector
**/
void Novel::addReview(const review object){
    review_rating.push_back(object);
}
/**
  @post: retrieves all scores from the reviews_ vector and 
  computes the average to set value of the average_rating_ private member
**/  
void Novel::calculateAverageRating(){
    int count = 0;
    for(int i=0;i<review_rating.size();i++){
        rating_point += review_rating[i].score_;
        count++;
    }
    rating_point = rating_point / count;
}
