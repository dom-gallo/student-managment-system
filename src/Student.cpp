#include "Student.h"

Student::Student(std::string s)
{
    this->name = s;
    this->id = this->gen_id(s);
}

std::string Student::getName()
{
    return this->name;
}
int Student::gen_id(const std::string &s)
{
    int tmp = 0;
    for(int i=0; i<s.length(); i++)
    {
        int c = (int) s[i];
        tmp += (c + c*i) % 999;
    }
    return tmp;
}
int Student::getID()
{
    return this->id;
}