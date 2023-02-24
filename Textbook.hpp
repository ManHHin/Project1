/*Manhin
Cs235
Dr.Tiziana Ligorio
Project 2
*/
#ifndef TEXTBOOK_H
#define TEXTBOOK_H
#include <string>
#include "Book.hpp"

enum grade_level{NONE, ELEMENTARY, JUNIOR_HIGH, HIGH_SCHOOL, COLLEGE};

class Textbook : public Book
{
    private:
        std::string subject = "";
        grade_level grade;
        bool review_questions;
    
    public:
        Textbook();
        Textbook(std::string title, std::string author, int page_count, std::string subject, bool digital_form = 0,
        grade_level grade = NONE, bool review_questions = 0);
        void setSubject(const std::string& sub);
        std::string getSubject() const;
        void setGradeLevel(const grade_level& g);
        std::string getGradeLevel() const;
        void setReviewQuestions();
        bool checkReviewQuestions() const;
};
#endif



