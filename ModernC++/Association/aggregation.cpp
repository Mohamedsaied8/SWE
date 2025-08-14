#include <iostream>

class OilLevel
{
    public:
    OilLevel(){}
};

class Engine
{
    public:
    Engine(OilLevel *oil) : oil_{oil}
    {

    }
    private:
    OilLevel* oil_;
};

//*************** */
class Sensor
{
    public:
    int  getReading()
    {
        return 25;
    }
};

class Algorithm
{
    public:
    Algorithm(Sensor& sensor) : sensor_{sensor}
    {
        sensor_.getReading();
    }

    private:
    Sensor &sensor_; // aggregation
};

int main()
{
    Sensor temperature_sensor;
    Algorithm heat_compensation(temperature_sensor);

    OilLevel * oil_level = new OilLevel();
    Engine engine(oil_level);
    
    return 0;
}