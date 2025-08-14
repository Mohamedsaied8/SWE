#include <set>
#include <iostream>

class Sensor
{
    public:

    Sensor(int initial_reading) : reading{initial_reading}
    {

    }

    int getReading() const
    {
        return reading;
    }

    bool operator<(const Sensor& s) const
    {
        return this->reading > s.getReading();
    }


    int reading;
};

struct SensorCmp
{
    bool operator()(const Sensor& s1, const Sensor& s2) const
    {
        return s1.operator<(s2);
    }
};

int main()
{
    std::set<Sensor,SensorCmp> sensors;
    Sensor s1(0);
    Sensor s2(10);

    sensors.insert(s1);
    sensors.insert(s2);

    for(auto sensor : sensors)
    {
        std::cout << "sensor reading " << sensor.getReading() << "\n";
    }
    return 0;
}