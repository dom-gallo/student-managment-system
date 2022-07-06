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
    // Looping over storage test 
    while(begin != sr_storage.end())
    {
        std::cout << "ID: " << begin->first << " Name: " << begin->second->getName() << std::endl;
        begin++;
    }
    // Finding by name test
    Student *s2 = sr->findByName("Dom Gallo");
    if(s2 == nullptr)
    {
        std::cout << "Could not find student." << std::endl;
    } else 
    {
        std::cout << "Found student with name: " << s2->getName() << std::endl;
    }
    
    // finding by id test
    Student *s3 = sr->getById(3302);
    if(!s3)
    {
        std::cout << "Could not find student with id 3302" << std::endl;
    } else 
    {
        std::cout << "Found student with ID: 3302 " << s3->getName() << std::endl;
    }
    
    do 
    {
        VM->printOptions();
        sys_state = VM->getInput();
    } while (sys_state != SystemState::Exit);

    return 0;
}