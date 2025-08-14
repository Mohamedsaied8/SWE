#include <iostream>

template <class T>
class SmartPtr
{
    public:
    SmartPtr(T *p) : actual_ptr{p}
    {

    }

    SmartPtr(const SmartPtr& copy) = delete;
    T operator=(const SmartPtr& copy) = delete;

    ~SmartPtr()
    {
        std::cout << "called destructor\ndeleted the object\n";
        delete actual_ptr;
    }

    T& operator*()
    {
        return *actual_ptr;
    }

    private:
    T *actual_ptr;
};

int main()
{
    SmartPtr<double> smart(new double(8.1));
    *smart = 10.0;

    std::cout << "value " << *smart << "\n";
    return 0;
}