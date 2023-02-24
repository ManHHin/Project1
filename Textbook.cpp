/*Manhin
Cs235
Dr.Tiziana Ligorio
Project 2
Book-subclasses: Textbook.
*/
#include "Textbook.hpp"

/**
  Default constructor.
  Default-initializes all private members.
*/
Textbook::Textbook():
    subject(""),
    grade(NONE),
    review_questions(0)
{}
/**
  Parameterized constructor.
  @param: The title of the book (a string)
  @param: The author of the book (a string)
  @param: The number of pages in the book (a positive integer)
  @param: The subject of the book (a string)
  @param: A flag indicating whether the book is in digital form with DEFAULT VALUE False (a Boolean)
  @param: The grade level of the book (of type grade_level) with DEFAULT VALUE NONE
  @param: A boolean to indicate whether the book has review questions with DEFAULT VALUE False
  @post: The private members are set to the values of the corresponding parameters.
*/
Textbook::Textbook(std::string title, std::string author, int page_count, std::string subject, bool digital_form, grade_level grade, bool review_questions):
  Book(title, author, page_count,digital_form),
  subject(subject),
  grade(grade),
  review_questions(review_questions)
{}
/**
  @param: a reference to a string representing the the subject of the book
  @post: sets the private member variable to the value of the parameter
**/
void Textbook::setSubject(const std::string& sub){
    subject = sub;
}
/**
  @return: the subject of the textbook
**/
std::string Textbook::getSubject() const{
    return subject;
}
/**
  @param: a reference to a grade_level
  @post: sets the private member variable to the value of the parameter
**/
void Textbook::setGradeLevel(const grade_level& g){
    grade = g;

}
/**
  @return: a string representative of the grade_level (e.g. if the grade level is JUNIOR_HIGH,
  it returns "JUNIOR HIGH")
**/
std::string Textbook::getGradeLevel() const{
    switch (grade)
    {
    case ELEMENTARY:
        return "ELEMENTARY";
        break;
    case JUNIOR_HIGH:
        return "JUNIOR HIGH";
        break;
    case HIGH_SCHOOL:
        return "HIGH SCHOOL";
        break;
    case COLLEGE:
        return "COLLEGE";
        break;
    default:
        return "NONE";
        break;
    }
}
/**
  @post: sets the review question flag to True
**/
void Textbook::setReviewQuestions(){
    review_questions = true;
}
/**
  @return: the flag indicating if the texbook has review questions
**/
bool Textbook::checkReviewQuestions() const{
    return review_questions;
}

