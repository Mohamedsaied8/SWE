#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vect; //

    vect.reserve(10);
    for(int i=0;i<vect.size(); i++)
    {
        std::cin >> vect[i];
    }
    vect.push_back(3);
    vect.push_back(5);
    vect.push_back(6);
    vect.push_back(1);
    vect.emplace_back(8);

    for(auto element : vect)
    {
        std::cout << "element " << element << "\n";
    }
}