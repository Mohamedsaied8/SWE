#include <iostream>

//abstract class
class Subject
{
    public:
    virtual void open() = 0;
};

class RealSubject : public Subject
{
    public:
    void open() override
    {
        //changes or modifications
        std::cout << "RealSubject::open()" << std::endl;
    }

};

class Proxy : public Subject
{
    public:
    Proxy(std::string user_name, std::string password) : user_name_{user_name}, password_{password}
    {
        real_subject_ = new RealSubject();
    }

    ~Proxy()
    {
        delete real_subject_;
    }

    void open() override
    {
        if(Authintecate())
        {
            std::cout << "Proxy::open()" << std::endl;
            real_subject_->open();
        }
    }

    bool Authintecate()
    {
        if(user_name_ == "Admin" && password_ == "Test123" )
        {
            std::cout << "Proxy::Authintecate() - Authenticated" << std::endl;
            return true;
        } 
        std::cout << "Proxy::Authintecate() - Un-authenticated" << std::endl;
        return false;
    }
    private:
    RealSubject* real_subject_; 
    std::string user_name_;
    std::string password_;
};

int main()
{
    Proxy proxy("Admin", "Test124");
    proxy.open();

    return 0;
}