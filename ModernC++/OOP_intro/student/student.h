#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
    public:
    Student() = default; //default constructor
    //parameterized constructor
    Student(int pId, std::string pName, float pGpa);
    Student(const Student& copy);

    Student& operator=(const Student& copy);

    ~Student(); //destructor
    void setId(int id);
    int getId() const;
    void setName(std::string name);
    std::string getName() const;
    void setGPA(float gpa);
    float getGPA() const;
    void display() const;
    private:
    int id;
    std::string name;
    float gpa;
};

#endif