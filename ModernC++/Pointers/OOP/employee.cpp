#include <iostream>
#include "employee.h"

Employee::Employee() : m_id{-1},
                       m_first_name{""},
                       m_last_name{""},
                       m_salary{0},
                       m_status{false}
{
    std::cout <<"constructor called\n";
}

Employee::Employee(int id, int salary, std::string firstname,
                    std::string lastname, bool status)
                     : m_id{id},
                       m_salary{salary},
                       m_first_name{firstname},
                       m_last_name{lastname},
                       m_status{status}
    
    {

    }

Employee::~Employee()
{
    std::cout << "destructor is called\n";
}

void Employee::setId(int id)
{
    m_id = id;
}

int Employee::getId()
{
    return m_id;
}

void Employee::setSalary(int salary)
{
    m_salary = salary;
}

int Employee::getSalary()
{
    return m_salary;
}

void Employee::setFirstName(std::string firstname)
{
    m_first_name = firstname;
}

std::string Employee::getFirstName()
{
    return m_first_name;
}

void Employee::setLastName(std::string lastname)
{
    m_last_name = lastname;
}

std::string Employee::getLastName()
{
    return m_last_name;
}

void Employee::setStatus(bool status)
{
    m_status = status;
}

bool Employee::getStatus()
{
    return m_status;
}

void Employee::display()
{
    std::cout <<"employee id " << m_id 
            << " Salary " << m_salary 
            << " name " << m_first_name 
            <<" " << m_last_name 
            << " hiring status " << m_status << "\n";
}
  