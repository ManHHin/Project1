#ifndef NOVEL_H
#define NOVEL_H
#include "Book.hpp"
#include <string>
#include <string>
#include <vector>

struct review {
    double score_;
    std::string rating_;
};

class Novel : public Book
{
    private:
        std::string genre;
        std::vector <std::string> characters;
        std::vector <review> reviews;
        double point;
        bool film;
    
    public:
        Novel();
        Novel(std::string title, std::string author, int page_count, std::string genre, bool digital_form, bool film);
        std::string getGenre() const;
        void setGenre(const std::string& gen);
        std::vector<std::string> getCharacterList() const;
        std::string getCharacterListString() const;
        void addCharacter(const std::string& charac);
        bool hasFilmAdaptation() const;
        void setFilmAdaptation();
        double getAverageRating() const;
        review createReview(const double& score, std::string& reviews);
        void addReview(const review object);
        void calculateAverageRating();

};
#endif