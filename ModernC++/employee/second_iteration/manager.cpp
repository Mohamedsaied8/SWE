#include "manager.h"

Manager::Manager(int id, int& age, int salary, std::string name, std::string department)
                        :Employee(id, age, salary, name) , department_{department}

{
    Manager::display();
}

void Manager::display()
{
    Employee::display();
    std::cout << "department " << department_ << "\n";
}
