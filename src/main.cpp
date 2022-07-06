#include <iostream>
#include <string>

#include "ViewManager.h"
#include "SystemState.h"
#include "Student.h"
#include "StudentRepo.h"

int main(int argc, char *argv[])
{
    StudentRepo *sr = new StudentRepo();
    Student *s1 = new Student("Dom Gallo");

    ViewManager *VM = new ViewManager();
    SystemState sys_state = SystemState::Home;
    
    sr->addStudent(s1);
    std::unordered_map<int, Student*> sr_storage = sr->getAll();
    std::unordered_map<int, Student*>::iterator begin = sr_storage.begin();
    while(begin != sr_storage.end())
    {
        std::cout << "ID: " << begin->first << " Name: " << begin->second->getName() << std::endl;
        begin++;
    }
    while(sys_state != SystemState::Exit)
    {
        VM->printOptions();
        sys_state = VM->getInput();
    }

    return 0;
}