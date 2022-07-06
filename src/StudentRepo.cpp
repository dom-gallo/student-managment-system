#include "StudentRepo.h"

StudentRepo::StudentRepo()
{
    this->storage = std::unordered_map<int, Student*>{};
}
bool StudentRepo::addStudent(Student *s)
{
    if(s == nullptr)
    {
        return false;
    }

    this->storage[s->getID()] = s;
    return true;
}
std::unordered_map<int, Student*> StudentRepo::getAll()
{
    return this->storage;
}
