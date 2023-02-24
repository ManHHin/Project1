/*Manhin
Cs235
Dr.Tiziana Ligorio
Project 2
Book-subclasses: Novel.
*/
#ifndef NOVEL_H
#define NOVEL_H
#include <string>
#include <vector>
#include "Book.hpp"

//A defined Struct
struct review {
    double score_;
    std::string rating_;
};

class Novel : public Book
{
    private:
    //private member data variables
        std::string genre;
        std::vector <std::string> characters_list;
        std::vector <review> review_rating;
        double rating_point;
        bool film_Adap;
    
    public:
    //Default constructor.
    //Default-initializes all private members. Booleans are default-initialized to False.
        Novel();
        Novel(std::string title, std::string author, int page_count, std::string genre = "", bool digital_form = 0, bool film = 0);
    //Unique Methods
    //Accessor and Mutator functions
        std::string getGenre() const;
        void setGenre(const std::string& novelGenre);
        
        std::vector<std::string> getCharacterList() const;
        std::string getCharacterListString() const;
        void addCharacter(const std::string& characters_name);
        
        bool hasFilmAdaptation() const;
        void setFilmAdaptation();
        
        double getAverageRating() const;
        review createReview(const double& rating_score, std::string rating_reviews);
        void addReview(const review object);
        void calculateAverageRating();

};
#endif