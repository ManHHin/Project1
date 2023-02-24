#include "Novel.hpp"

Novel::Novel():
    genre(),
    characters(),
    reviews(),
    point(),
    film()
{}
Novel::Novel(std::string title, std::string author, int page_count, std::string genre, bool digital_form, bool film):
    Book(title, author, page_count, digital_form),
    genre(genre),
    film(film)
{}
std::string Novel::getGenre() const{
    return genre;
}
void Novel::setGenre(const std::string& gen){
    genre = gen;
}
std::vector<std::string> Novel::getCharacterList() const{
    return characters;
}
std::string Novel::getCharacterListString() const{
    
    std::string sentence = "";
    for(int i = 0;i<characters.size();i++){
        sentence = characters[i] + " ";
    }
    return sentence;
}
void Novel::addCharacter(const std::string& charac){
    characters.push_back(charac);
}
bool Novel::hasFilmAdaptation() const{
    return film;
}
void Novel::setFilmAdaptation(){
    film = 1;
}
double Novel::getAverageRating() const{
    return point;
}
review Novel::createReview(const double& score, std::string& reviews){
    review Rating;
    Rating.score_ = score;
    Rating.rating_ = reviews;

    return Rating;
}
void Novel::addReview(const review object){
    reviews.push_back(object);
}
void Novel::calculateAverageRating(){
    int count = 0;
    for(int i=0;i<reviews.size();i++){
        point += reviews[i].score_;
        count++;
    }
    point = point / count;
}

