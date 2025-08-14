#include "student.h"
#include <iostream>

Student::Student(int pId, std::string pName, float pGpa) 
                            : id{pId}, name{pName}, gpa{pGpa}
{
    std::cout << "constructor is called\n";
}

Student::Student(const Student& student)
{
    this->id = student.id;
    this->name =  student.name;
    this->gpa = student.gpa;
    std::cout << "copy constructor\n";
}

Student::~Student()
{
    std::cout << "destructor is called\n";

}

Student& Student::operator=(const Student& copy)
{
    this->id = copy.id;
    this->name =  copy.name;
    this->gpa = copy.gpa;
}

void Student::setId(int id)
{
    this->id = id;
}

int Student::getId() const
{
    return this->id;
}

void Student::setName(std::string name)
{
    this->name = name;
}

std::string Student::getName() const
{
    return name;
}

void Student::setGPA(float gpa)
{
    this->gpa = gpa;
}

float Student::getGPA() const
{
    return gpa;
}

void Student::display() const
{
    std::cout << this->getId() << getName() << getGPA();

}