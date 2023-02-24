/*Manhin
Cs235
Dr.Tiziana Ligorio
Project 2
Book-subclasses: Textbook.
*/
#ifndef TEXTBOOK_H
#define TEXTBOOK_H
#include <string>
#include "Book.hpp"

//Defined enum
enum grade_level{NONE, ELEMENTARY, JUNIOR_HIGH, HIGH_SCHOOL, COLLEGE};

class Textbook : public Book
{
    private:
    //private member data variables
        std::string subject = "";
        grade_level grade;
        bool review_questions;
    
    public:
    //Default constructor.
    //Default-initializes all private members. Booleans are default-initialized to False.
        Textbook();
        Textbook(std::string title, std::string author, int page_count, std::string subject, bool digital_form = 0, grade_level grade = NONE, bool review_questions = 0);
    
    //Unique Methods
    //Accessor and Mutator functions
        void setSubject(const std::string& sub);
        std::string getSubject() const;
        void setGradeLevel(const grade_level& g);
        std::string getGradeLevel() const;
        void setReviewQuestions();
        bool checkReviewQuestions() const;
};
#endif



