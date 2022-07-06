#ifndef STUDENT_REPO_H
#define STUDENT_REPO_H

#include <unordered_map>
#include "Student.h"

class StudentRepo
{
public:
    StudentRepo();
    std::unordered_map<int, Student*> getAll();
    bool addStudent(Student* s);
    Student* getById(const int &i);
    Student* findByName(const std::string &s);
private:
    std::unordered_map<int, Student*> storage;
};

#endif