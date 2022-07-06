#ifndef VIEW_MANAGER_H
#define VIEW_MANAGER_H
#include <iostream>
#include "SystemState.h"

class ViewManager
{
public:
    ViewManager();
    void printOptions();
    SystemState getInput();
private:
};

#endif