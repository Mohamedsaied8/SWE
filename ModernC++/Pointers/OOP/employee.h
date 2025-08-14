#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>

class Employee
{
    public:
    Employee(); //default

    //parameterized constructor
    Employee(int id, int salary, std::string firstname,
                     std::string lastname, bool status);

    ~Employee();
    void setId(int id);

    int getId();
    void setSalary(int salary);
    
    int getSalary();

    void setFirstName(std::string firstname);
    
    std::string getFirstName();

    void setLastName(std::string lastname);
    
    std::string getLastName();

    void setStatus(bool status);

    bool getStatus();

    void display();

    private:
    int m_id;
    int m_salary;
    std::string m_first_name;
    std::string m_last_name;
    bool m_status;
};

#endif