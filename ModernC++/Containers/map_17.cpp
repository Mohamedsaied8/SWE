#include <map>
#include <iostream>

namespace testing
{
    template<class T, class S>
    struct pair
    {
        pair(T f, S s) : first{f}, second{s}
        {}
        T first;
        S second;
    };

    template<class T, class S>
    pair<T,S> make_pair(T first, S second)
    {
        return pair<T,S>(first,second);
    }
}


int main()
{
    std::map<std::string, int> labs;
    labs["Robotics"] = 1;
    labs["Communication"] = 2;

    std::map<int, std::string> players;
    auto mypair = testing::make_pair<int, std::string>(9, "Metaab");
    players[mypair.first] = mypair.second;

    players.insert(std::pair<int, std::string>(8 , "Barakat"));

    players.insert(std::make_pair<int, std::string>(10, "Mohamed Salah"));
    std::pair<int,std::string> pair22(22, "Abo Trika");
    players.insert(pair22);
    players.insert(std::pair<int, std::string>(5, "El Neny"));
    players.insert({5, "El Neny"});
    players[2] = "Mohamed Abdel Monaem";

    for(auto [key, value] : players) //map c++17
    {
        std::cout << "key " << key << "value " << value << "\n";
    }

    for(auto it=players.begin(); it !=players.end();++it)
    {
        std::cout << "key " << it->first << " value " << it->second << "\n"; 
    }

    return 0;
}