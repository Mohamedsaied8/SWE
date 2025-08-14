#include <iostream>

class Singleton
{
    public:
    static Singleton* getInstance()
    {
        if(instance == nullptr)
        {
            instance = new Singleton();
            return instance;
        }
        return instance;
    }

    void Send(std::string data)
    {
        std::cout << "data to be sent " << data << "\n";
    }

    private:
    Singleton() = default;
    Singleton(const Singleton& singleton)
    {}
    static Singleton* instance;

};

Singleton* Singleton::instance = 0;

void Stereo()
{
    Singleton* ble = Singleton::getInstance();
    ble->Send("Play: track 1");
}

void AirConditioner()
{
    Singleton* ble = Singleton::getInstance();
    ble->Send("Set temperature to 25 degrees");
}

int main()
{
    Stereo();
    AirConditioner();

    return 0;
}