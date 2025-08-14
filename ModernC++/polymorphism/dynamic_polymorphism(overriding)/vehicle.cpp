#include <iostream>
#include <vector>

//Abstract class
class Vehicle
{
    public:
    virtual void Drive() = 0; //pure virtual function
    virtual void DefineGoal() = 0; //pure virtual function
};

class EVehicle : public Vehicle
{
    public:
    void Drive()
    {
        std::cout << "Electrical vehicle drive\n";
    }
    void DefineGoal()
    {

    }

    void Charge()
    {
        std::cout << "charging ...\n";
    }

};

class FVehicle : public Vehicle
{
    public:
    void Drive()
    {
        std::cout << "Fuel vehicle drive\n";
    }

    void DefineGoal()
    {

    }
};


void DriveAllVehicles(std::vector<Vehicle*> &vehicles)
{
    for(auto vehicle : vehicles)
    {
        vehicle->Drive();
        if(EVehicle* ev = dynamic_cast<EVehicle*>(vehicle))
        {
            ev->Charge();
        }
    }
}

int main()
{
    EVehicle elect_v;
    FVehicle fuel_v;

    std::vector<Vehicle*> vehicles; //empty vector

    vehicles.push_back(&elect_v); // size 1 cap 1
    vehicles.push_back(&fuel_v); // size 2 cap 2
    vehicles.push_back(&fuel_v); // size 3 cap 4

    DriveAllVehicles(vehicles);

    return 0;
}