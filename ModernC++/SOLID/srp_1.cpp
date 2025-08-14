// single responsibility : when there is one reason to change
//
//

#include <iostream>

class Journal
{
    public:
    Journal() = default;
    Journal(std::string title) : m_title{title}
    {

    }

    void setTitle(std::string local_title)
    {
        m_title = local_title;
    }

    std::string  getTitle()
    {
        return m_title;
    }

    private:
    std::string m_title; 
};
class ProofReading
{
    public:
    void proof()
    {

    }
};

class Article{
    public:
    virtual void write()=0;
};

class ElectronicArticle : Article
{
    public:
    ElectronicArticle(std::string title, std::string content) : m_title{title}, m_content{content}
    {

    }

    void write() override
    {

    }

    private:
    std::string m_title;
    std::string m_content;
    ProofReading proof_reading;
};

class ScientificPaper
{
    public:

    private:
    ProofReading proof_reading;
};

struct PrintManager
{
   static void Save(std::string file_name, std::string title)
    {
        std::cout << "saved title in file " 
                  << file_name << " title is" << title << "\n";
    }
};

int main()
{
    Journal alahram;
    alahram.setTitle("Greetings from Gaza!");
    PrintManager::Save("alahram.pdf", alahram.getTitle());

    return 0;
}