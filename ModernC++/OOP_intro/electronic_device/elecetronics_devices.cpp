#include <iostream>

//base class
//parent
//super
class ElectronicDevice
{
    public:
    ElectronicDevice(int price, int part_no, std::string name)
        : price{price}, m_part_number{part_no}, m_brand{name}
    {
        std::cout << "brand name " << m_brand 
        << " part no " << m_part_number <<
            " price " << price << "\n";    
    }

    //copy constructor
    ElectronicDevice(const ElectronicDevice& copy)
    {
        this->price = copy.price;
        this->m_part_number = copy.m_part_number;
        this->m_brand = copy.m_brand;
        std::cout <<"Copy constructor called...\n";
    }

    ~ElectronicDevice()
    {
        std::cout <<" object is deleted\n";
    }
    void setPrice(int price)
    {
        this->price = price;
    }
    int getPrice() const
    {
        return this->price;
    }
    void setPartNo(int part_no)
    {
        this->m_part_number = part_no;
    }
    int getPartNo() const
    {
        return this->m_part_number;
    }
    void setBrand(std::string brand)
    {
        this->m_brand = brand;
    }
    private:
    int price;
    int m_part_number;
    std::string m_brand;
};

//sub class
//child
class WashingMachine : public ElectronicDevice
{
    public:
    WashingMachine(int price, int part_no,  std::string name, 
                    int num_of_individuals)
                : ElectronicDevice(price, part_no, name),
                  m_num_of_individuals{num_of_individuals}
    {
    }
    ~WashingMachine()
    {
        std::cout << "sub-type destructor called\n";
    }
     private:
     int m_num_of_individuals;
};

int main()
{
    //stack
    ElectronicDevice device(1000, 1234, "Samsung");
    ElectronicDevice mobile_device(device);
    auto mob_device{device};
    std::cout << "samsung mobile price : " << device.getPrice() << "\n";

    //heap
    ElectronicDevice* device_ptr = new ElectronicDevice(1999, 54321, "Apple");
    std::cout << "apple mobile price : " << device_ptr->getPrice() << "\n";
    delete device_ptr;
    WashingMachine toshiba_10(15000, 14235, "Toshiba", 10);
    toshiba_10.setPrice(15500);
    std::cout << "washing machine price : " <<toshiba_10.getPrice() << "\n";

    return 0;
}