#include <iostream>
#include "student.h"

int main()
{
    std::string student_name = "Rana";
    std::string& name = student_name; //OK


    Student* international_student = new Student(1, name, 3.8);

    international_student->setName("Wael");

    delete international_student;
    
    Student first_student; //default constructor will be called
    first_student.setId(1);
    first_student.setName("Osama");
    first_student.setGPA(3.4);
    Student second_student(first_student); //copy constructor
    second_student = first_student; // assignment operator
    Student third_student = second_student; //copy constructor 
    std::cout << "ID " << first_student.getId() <<
    " name " << first_student.getName() 
        << " GPA " << first_student.getGPA() << "\n";

    Student* std_chinese = international_student;
    return 0;
}