//Open for extension closed for modification
#include <iostream>
#include <vector>

//abstract
class Article{
    public:
    virtual void write() = 0;
    virtual void read() = 0;
};

class ElectronicArticle : public Article
{
    public:
    ElectronicArticle(std::string title, std::string content) : m_title{title}, m_content{content}
    {

    }
    void write() override
    {

    }
    
    void read() override
    {
        std::cout << "Reading " << std::endl;
    }
    private:
    std::string m_title;
    std::string m_content;
 };

class ScientificPaper :  public Article
{
    public:
    void write() override
    {

    }
    
    void read() override
    {
        std::cout << "Reading " << std::endl;
    }
    private :
 };

class EducationalSlide : public Article
 {
    public:
    void write() override
    {

    }
    void read() override
    {
        std::cout << "Reading " << std::endl;
    }
};

void Display(std::vector<Article*> &articles)
{
    //range based for loop
    for(auto article : articles)
    {
        article->read();
    }
}

int main()
{
    ElectronicArticle electronic("Software Architecture", "SOLID principles");
    ScientificPaper paper;
    EducationalSlide slide;
    std::vector<Article*> articles{&electronic, &paper, &slide};
    Display(articles);

    return 0;
}