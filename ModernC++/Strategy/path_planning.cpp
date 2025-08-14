#include <iostream>
#include <vector>
struct Point
{
    Point(int pX, int pY) : x(pX) , y(pY)
    {}
    int x;
    int y;
};

using Path = std::vector<Point>;

//Abstract class
class IStrategy
{
    public:
    virtual Path Search() = 0;
};

class AStarStrategy : public IStrategy
{
    public:
    Path Search() override
    {
        std::cout << "AStarStrategy searching...";
        Path shortest{Point(1,1), Point(1,2), Point (2, 3)};
        return shortest;
    }
};

class DijkstraStrategy : public IStrategy
{
    public:
    Path Search() override
    {
        std::cout << "DijkstraStrategy searching...";
        Path shortest{Point(1,1), Point(1,2), Point (2, 3)};
        return shortest;
    }
};

class PathPlanning
{
    public:
    PathPlanning(IStrategy *strategy) : strategy_{strategy}
    {
        Planning();
    }
    ~PathPlanning()
    {}

    void Planning()
    {
       auto path = strategy_->Search();
       for(auto point : path)
       {
        std::cout << "x : " << point.x << " y : " << point.y << "\n"; 
       }
    }

    private:
    IStrategy *strategy_;
};

int main()
{
    
    IStrategy *strategy = new AStarStrategy();
    PathPlanning planning_astar(strategy);

    strategy = new DijkstraStrategy();
    PathPlanning planning_dikstra(strategy);

    return 0;
}