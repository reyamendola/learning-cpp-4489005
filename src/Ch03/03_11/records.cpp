// Write your implementation code here
#include "records.h"

Student::Student(int id_i,std::string name_i){
    id = id_i;
    name = name_i;
}
int Student::get_id() const{
    return id;
}
std::string Student::get_name() const{
    return name;
}

Course::Course(int id_i,std::string name_i,unsigned char credits_i){
    id = id_i;
    name = name_i;
    credits = credits_i;
}
int Course::get_id() const{
    return id;
}
std::string Course::get_name() const{
    return name;
}
int Course::get_credits() const{
    return (int)credits;
}

Grade::Grade(int sid,int cid,char grd
){
    student_id = sid;
    course_id = cid;
    grade = grd;
}
int Grade::get_student_id() const{
    return student_id;
}
int Grade::get_course_id() const{
    return course_id;
}
char Grade::get_grade() const{
    return grade;
}
