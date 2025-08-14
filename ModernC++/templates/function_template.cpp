#include <iostream>


class Person
{
    public:
    Person(std::string name, int age) : name_{name} , age_{age}
    {}

    Person(const Person& copy)
    {
        this->name_ = copy.name_;
        this->age_ = copy.age_;
    }

    Person& operator=(const Person& rhs)
    {
        this->age_ = rhs.age_;
        this->name_ = rhs.name_;
        
        return *this;
    }

    bool operator<(Person copy)
    {
        return this->age_ < copy.age_;
    }

    friend std::ostream& operator<<(std::ostream& outstream, Person person)
    {
        outstream << person.name_ << " has age " << person.age_  << std::endl;
        return outstream;
    }

    private:
    std::string name_;
    int age_;
};


template<class T>
T max(T x, T y)
{
    return x < y? y : x;
}

template<class T>
void swap(T& x, T& y)
{
    auto temp = x;
    x = y;
    y = temp;
}

double readSensor()
{
    double sensor;
    std::cin >> sensor;
    return sensor;
}

double ConvertToCelisus(double sensor_reading)
{
    return sensor_reading * 0.05; //convert to celisus
}

int main()
{

    double  sensor_reading = readSensor();

    double temperature = ConvertToCelisus(sensor_reading);
    double max_d = max<double>(temperature, 25.0);
    std::cout << "max temperature is " << max_d << std::endl;


    int maximum = max<int>(3, 5);
    std::cout << "max is " << maximum << std::endl;



    
    char max_c = max<char>('a','b');
    std::cout << "max is " << max_c << std::endl;


    Person employee("Mostafa", 26);
    Person enterprenuer("Ahmed", 31);

    Person maximum_person = max<Person>(employee, enterprenuer);
    std::cout << "max is " << maximum_person << std::endl;


    swap(employee, enterprenuer);

    std::cout << "swapped " << employee << " " << enterprenuer << std::endl;
    return 0;
}
