#include "Textbook.hpp"

Textbook::Textbook():
    subject(),
    grade(),
    review_questions()
{}
Textbook::Textbook(std::string title, std::string author, int page_count, std::string subject, bool digital_form, grade_level grade, bool review_questions):
Book(title, author, page_count,digital_form),
subject(subject),
grade(grade),
review_questions(review_questions)
{}
void Textbook::setSubject(const std::string& sub){
    subject = sub;
}
std::string Textbook::getSubject() const{
    return subject;
}
void Textbook::setGradeLevel(const grade_level& g){
    grade = g;

}
std::string Textbook::getGradeLevel() const{
    if(grade == ELEMENTARY){
        return "ELEMENTARY";
    }
    else if(grade == JUNIOR_HIGH){
        return "JUNIOR HIGH";
    }
    else if(grade == HIGH_SCHOOL){
        return "HIGH SCHOOL";
    }
    else
        return "NONE";
}
void Textbook::setReviewQuestions(){
    review_questions = true;
}
bool Textbook::checkReviewQuestions() const{
    return review_questions;
}

