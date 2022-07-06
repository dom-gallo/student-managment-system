#include "ViewManager.h"

ViewManager::ViewManager(){};

void ViewManager::printOptions()
{
    std::cout << "Student Management System" << std::endl;
    std::cout << "1. View Students" << std::endl;
    std::cout << "2. Add Student" << std::endl;
    std::cout << "3. Lookup Student" << std::endl;
}

SystemState ViewManager::getInput()
{
    int i;
    std::cout << "Enter your choice: ";
    std::cin >> i;
    std::cout << std::endl;

    switch(i)
    {
        case 1:
            return SystemState::ViewAll;
        break;
        case 2:
            return SystemState::Add;
        break;
        case 3:
            return SystemState::Lookup;
        break;
        case 9:
            return SystemState::Exit;
        break;
        default:
            return SystemState::Home;
        break;
    }
}