#include <memory>
#include <iostream>

int main()
{
    std::unique_ptr<int> uptr = std::make_unique<int>(10);      //( new int(8));
    //std::unique_ptr<int> uptr2(uptr); //ERROR
}