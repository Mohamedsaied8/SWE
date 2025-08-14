#include <iostream>
#include <vector>

class Person
{
    public:
    virtual void setName()
    {

    }
    void setAge(int age_)
    {
        this->age = age_;
    }
    int age;
};

class employee : public Person
{
    public:
    virtual void setName()
    {

    }
    void setSalary(int salary_)
    {
        this->salary = salary_;
    }
    int salary;
};

class Manager : public employee
{
    public:
    void setName()
    {

    }
    void setBonus(int bonus_)
    {
        this->bonus = bonus_;
    }
    int bonus;
};

void apply_operation(std::vector<Person*>& people)
{
    for(auto& person : people)
    {
        person->setAge(25);
        if(employee* emp = dynamic_cast<employee*>(person))
        {
            emp->setSalary(50000);
        }
    }
}
int main()
{
    employee e1;
    Person ps;
    std::vector<employee> employees;  //homogenous 
   //Error employees.push_back(ps);

    std::vector<Person*> pro_people; //heterogenous

    pro_people.push_back(&e1);
    pro_people.push_back(&ps);

    apply_operation(pro_people);

    
    std::vector<int> vect(10); 

    vect.push_back(4);

    std::cout <<vect.size() << " " << vect.capacity() << std::endl;

    return 0;
}