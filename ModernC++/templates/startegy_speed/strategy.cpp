#include <iostream>

class IStrategy
{
    public:
    virtual void CalculateSpeed() = 0;

    virtual ~IStrategy() = default;
};

class Accelerometer : public IStrategy
{
    public:
    Accelerometer() = default;

    void CalculateSpeed() override
    {
        std::cout << "accelerometer speed\n";
    }
};

class RadarSpeed : public IStrategy
{
    public:
    RadarSpeed() = default;

    void CalculateSpeed() override
    {
        std::cout << "Radar Speed\n";
    }
};

template<class T>
class Vehicle
{
    public:
    Vehicle()
    {
        strategy_ = new T;
    }

    void vehicleSpeed()
    {
        strategy_->CalculateSpeed();
    }
    private:
    T * strategy_;
};

int main()
{
   // IStrategy * bmw_speed = new RadarSpeed;
    Vehicle<RadarSpeed> bmw;
    bmw.vehicleSpeed();

    // IStrategy * vw_speed = new Accelerometer;
    Vehicle<Accelerometer> vw;
    vw.vehicleSpeed();

    return 0;
}