#include <iostream>
#include <algorithm>
#include <vector>

class Observer
{
    public:
    virtual void update() = 0;
    virtual ~Observer() = default;
};

class Subject
{
    public:
    void attach(Observer& o)
    {
        observers.push_back(&o);
    }
    void detach(Observer& o)
    {
        observers.erase(std::remove(observers.begin(), observers.end(), &o));
    }

    void notify()
    {
        for(auto &observer: observers)
        {
            observer->update();
        }
    }
    std::vector<Observer*> observers;
};
class ClockTimer : public Subject
{
    public:
    ClockTimer(){}
    void SetTime(int hours, int minutes, int seconds)
    {
        this->m_hours = hours;
        this->m_minutes = minutes;
        this->m_seconds = seconds;
        this->notify();
    }
    int m_seconds;
    int m_minutes;
    int m_hours;
};

//resource aquisition is initialization : RAII
class AnalogClock : public Observer
{
    public:
    AnalogClock(ClockTimer &timer) : m_timer{timer}
    {
        m_timer.attach(*this);
    }
    ~AnalogClock()
    {
        m_timer.detach(*this);
    }

    void draw()
    {
        std::cout << "draw analog watch\n";
    }

    void update() override
    {
        this->draw();
    }
    private:
    ClockTimer &m_timer;
};

class DigitalClock : public Observer
{
    public:
    DigitalClock(ClockTimer &timer) : m_timer{timer}
    {
        m_timer.attach(*this);
    }
    ~DigitalClock()
    {
        m_timer.detach(*this);
    }

    void draw()
    {
        std::cout << "draw Digital watch\n";
    }

    void update() override
    {
        this->draw();
    }
    private:
    ClockTimer &m_timer;
};

int main()
{
    ClockTimer timer;
    AnalogClock analog(timer);
    DigitalClock digital(timer);

    timer.SetTime(10, 1, 20);

    return 0;
}