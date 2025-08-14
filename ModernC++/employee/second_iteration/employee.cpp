#include <iostream>
#include "employee.h"
// class vs struct
//class is private by default
//struct is public by default
// Employee::Employee() : id_{-1},
//                        age_{-1},
//                        salary_{-1},
//                        name_{" "}
// {
//     std::cout <<"default constructor\n";
// }

Employee::Employee(int id, int& age, const int salary, std::string name) 
                        : id_{id}, salary_{salary}, name_{name}, age_{age}
                                                        
{
    
    std::cout <<"paramterized constructor: id " << this->id_ << 
    " name "<< this->name_ <<
    " age " << this->age_ << 
    " salary " << this->salary_ << "\n";
}

Employee:: Employee(int id, int& age) :id_{id}, age_{age}
{

}

Employee::~Employee()
{
    std::cout << "emplyee with id " << id_ << " destructor is called\n";
}

void Employee::hire()
{
    std::cout << "Employee " << name_ << " has been hired." << std::endl;
}

void Employee::setId(int id)
{
    this->id_ = id;
}

int Employee::getId()
{
    return this->id_;
}

void Employee::setName(std::string name)
{
    this->name_ = name;
}

void Employee::setAge(int age)
{
    this->age_ = age;
}

int Employee::getAge()
{
    return this->age_;
}

std::string Employee::getName()
{
    
    return this->name_;
}

void Employee::display() const
{
    std::cout << "name " << this->name_ << " id " << this->id_ << "\n";
}
    