#include <iostream>

namespace GradingSystem
{
    float gpa;
    std::string grade;

    void GetGrade()
    {
        std::cout << "please enter GPA\n";
        std::cin >> gpa;
    }

    void Compute()
    {
        if(gpa < 50)
        {
            grade = "failed";
        }
         if(gpa> 50 && gpa <=65)
        {
            grade = "passed";
        }
        else if(gpa > 65 && gpa <= 75)
        {
            grade = "good";
        }
    }

    void Display()
    {
        std::cout << "your grade is " << grade << "\n";
    }
}

int main()
{
    GradingSystem::GetGrade();
    GradingSystem::Compute();
    GradingSystem::Display();

    return 0;

}