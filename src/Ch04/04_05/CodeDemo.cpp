// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 
/*
A is 4, B is 3, D is 1, F is 0
*/
#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here
    float totalcredits = 0.0f;
    for (auto g : grades){
        if(id == g.get_student_id()){
            float score = float(4 - (g.get_grade()-'A'));
            for (auto c : courses){
                if (g.get_course_id() == c.get_id()){
                    GPA += score*c.get_credits();
                    totalcredits += c.get_credits();
                }
            }
        }
    }
    GPA /= totalcredits;

    std::string student_str;
    int s = 0;
    for (int i = 0; i < students.size(); i++){
        if (id == students[i].get_id()){
            s = i;
            break;
            }
    }

    student_str = students[s].get_name(); // Change this to the selected student's name

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
