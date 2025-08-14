#ifndef MANAGER_H
#define MANAGER_H

#include "employee.h"
#include <iostream>

class Manager : public Employee
{
    public:

    Manager(int id, int& age, int salary, std::string name, std::string department);
    void display();
    private:
    std::string department_;
};

#endif