#include <set>
#include <iostream>

class Person
{
    public:
    Person(int age, std::string name) : name_{name}, age_{age}
    {

    }

    friend bool operator<(const Person& lhs,const Person& rhs)
    {
        return lhs.age_ < rhs.age_;
    }

    std::string name_;
    int age_;
};

struct Cmp
{
    bool operator()(const Person& p1, const Person& p2) const
    {
        return p1.age_ > p2.age_;
    }
};

int main()
{
    Person p1(20, "Tareq");
    Person p2(30, "Mahmoud");
    Person p3(32, "mohamed");
    Person p4(23, "Nour");

    std::set<Person, Cmp> people{p1, p2, p3, p4};
    for(auto person : people)
    {
        std::cout << "name " << person.name_ 
        << " age" << person.age_ << "\n";
    }

    return 0;
}