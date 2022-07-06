#include <iostream>
#include <string>

#include "ViewManager.h"
#include "SystemState.h"
#include "Student.h"

int main(int argc, char *argv[])
{
    ViewManager *VM = new ViewManager();

    SystemState sys_state = SystemState::Home;
    
    Student *s1 = new Student("Dom Gallo");

    std::cout << "Name: " << s1->getName() << " id: " << s1->getID() << std::endl;


    while(sys_state != SystemState::Exit)
    {
        VM->printOptions();
        sys_state = VM->getInput();
    }

    return 0;
}