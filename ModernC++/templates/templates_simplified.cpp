#include <iostream>
#include <cinttypes>

template<class T>
T max(T a, T b)
{
    return a<b ? a : b; //ternary operator ? : 
}

class Person
{
    public:
    Person(std::string name, std::uint16_t age) : name_{name}, age_{age}
    {

    }

    Person(const Person& copy_person)
    {
        this->name_ = copy_person.name_;
        this->age_ = copy_person.age_;
    }

    bool operator<(const Person& copy_person)
    {
        return this->age_ < copy_person.age_;
    }

    std::uint16_t getAge()
    {
        return this->age_;
    }
    private:
    std::string name_;
    std::uint16_t age_;
};
 
int main()
{
    auto maximum = max<int>(3, 5);
    std::cout << "max is " << maximum << std::endl;


    double result = max<double>(3.14, 50.0);
    std::cout << "max is " << result << std::endl;

    Person a("Ahmed", 25);
    Person b("Moaz", 26);

    Person result_person = max<Person>(a, b);
    std::cout << "max age is  " << result_person.getAge() << std::endl;

    return 0;
}