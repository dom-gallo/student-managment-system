#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
public: 
    Student(std::string s);
    std::string getName();
    int getID();
private:
    int gen_id(const std::string &s);
    std::string name;
    int id;
};

#endif