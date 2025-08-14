#include "employee.h"
#include "manager.h"

int main()
{
   // Employee emp1; //call default constructor
    // emp1.setId(1);
    // emp1.setAge(25);
    // emp1.setName("Hesham");
    // emp1.hire();

    int emp1_age = 25;
    // Employee *emp2 = new Employee(2, emp1_age, 1000, "Mohamed Alaa");
    // emp2->hire();

    // delete emp2;


    Manager m1(2, emp1_age, 1000, "Mohamed Alaa", "Engineering");
    
    return 0;
}