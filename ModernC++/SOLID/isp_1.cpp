#include <iostream>

class IPrinter
{
    public:
    virtual void print() = 0;
};

class BrotherPrinter : public IPrinter
{
    public:
    BrotherPrinter()
    {
        std::cout << "brother printer\n";
    }
    void print()
    {
        std::cout << "brother printer prints\n"; 
    }
};
class Xreox : public IPrinter
{
    public:
    Xreox()
    {
        std::cout << "Xreox printer\n";
    }
    void print()
    {
        std::cout << "Xreox printer prints\n"; 
    }
};

class IScanner
{
    public:
    virtual void scan() = 0;
};
class BekoScanner : public IScanner
{
    public:
    BekoScanner()
    {
        std::cout << "beko scanner\n";
    }
    void scan()
    {
        std::cout << "beko scanner scans\n"; 
    }
};
class IFax
{
    public:
    virtual void send() = 0;
};

class BekoFax : public IFax
{
    public:
    BekoFax()
    {
        std::cout << "beko fax\n";
    }
    void send()
    {
        std::cout << "beko fax sends\n";
    }
};

class MFP :public IPrinter, IScanner , IFax
{
    public:
    MFP(IPrinter* printer, IScanner* scanner, IFax* fax) :m_printer{printer}, m_scanner{scanner}, m_fax{fax}
    {}
    void send() override
    {
        m_fax->send();
    }
    void print()override
    {
        m_printer->print();
    }
    void scan()override
    {
        m_scanner->scan();
    }
    private:
    IPrinter* m_printer;
    IScanner* m_scanner;
    IFax* m_fax;
};

int main()
{
    IPrinter* printer = new BrotherPrinter;
    IScanner* scanner = new BekoScanner;
    IFax* fax = new BekoFax;

    MFP mfp(printer, scanner, fax);
    mfp.scan();
    mfp.print();
    mfp.send();

    printer = new Xreox;
    MFP mfp_second_floor(printer, scanner, fax);
    mfp_second_floor.print();
    return 0;
}