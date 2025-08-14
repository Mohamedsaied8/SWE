#include <iostream>
#include <cinttypes>

// (mohamed salah, 10)
// (abu trika, 22)

template<class T, class M>
struct Pair
{
    Pair(T p_first, M p_second) : first{p_first}, second{p_second}
    {

    }

    //setters and getters
    void setFirst(T local_first)
    {
        this->first = local_first;
    }

    void setSecond(M local_second)
    {
        this->second = local_second;
    }

    T getFirst();
    M getSecond();

    T first;
    M second; 
};

template<class T, class M>
T Pair<T, M>::getFirst()
{
    return this->first;
}

int main()
{
    Pair<std::string, std::uint16_t> player_1("Abu Trika", 22);
    std::cout << "name " << player_1.first << " number " << player_1.second << "\n";

    Pair<int, std::string> country(1, "Egypt");

    Pair<int, int> coordinates(5, 7); //x,y

    Pair<double, double> location(33.39, 31.37); //cairo location in degrees

    return 0;
}