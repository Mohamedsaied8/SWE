#include <iostream>
#include <vector>
#include <algorithm>

class Graphic
{
  public:
  virtual void draw() const = 0;
  virtual void add(Graphic* graphic){}
  virtual void remove(Graphic* graphic){}
};

class Line : public Graphic
{
  public:
   void draw() const override 
   {
    std::cout << "draw line \n";

   }
};
class Rectangle : public Graphic
{
  public:
   void draw() const override
   {
    std::cout << "draw Rectangle \n";

   }
};

class Text : public Graphic
{
  public:
   void draw() const override
   {
    std::cout << "draw Text \n";
   }
};

class Picture : public Graphic
{
  public:

  void draw() const override
  {
    for(auto& graphic : graphic_list)
    {
      graphic->draw();
    }
  }

  void add(Graphic* graphic) override
  {
    graphic_list.push_back(graphic);
  }

  void remove(Graphic* graphic) override
  {
    graphic_list.erase(std::remove(graphic_list.begin(), graphic_list.end(), graphic));
  }

  private:
  std::vector<Graphic*> graphic_list;
};

int main()
{
  Line line;
  Rectangle rect;
  Text text;

  Picture pic;
  pic.add(&line);
  pic.add(&rect);
  pic.add(&text);

  pic.draw();
  return 0;
}