#include <memory>
#include <iostream>

std::weak_ptr<int> num_weak_ptr;
void Observe()
{
    if(auto num_shared_ptr = num_weak_ptr.lock())
    {
        std::cout << "able to lock shared ptr \nnum value : " << *num_shared_ptr << "\n";

    }
    else
    {
        std::cout << "unable to lock shared ptr \n";
    }
}

int main()
{
    {
        std::shared_ptr<int> num_ptr(new int);
        *num_ptr = 8;
        num_weak_ptr = num_ptr; 
        std::cout<< "reference count " << num_ptr.use_count() << "\n";
        Observe();
    }
    Observe();

    return 0;
}