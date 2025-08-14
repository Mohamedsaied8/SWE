#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
class Employee
{
    public:

    //default constructor
    Employee();

    //parameterized constructor
    Employee(int id, int& age, int salary,std::string name);

    Employee(int id, int& age);
    //destructor
    ~Employee();

    void setId(int id);
    int getId();
    void setName(std::string name);
    std::string getName();
    void setAge(int age);
    int getAge();
    void hire();
    void display() const;

    private:
    int id_;
    std::string name_;
    int& age_;
    int salary_;
};
#endif