#include <iostream>
using namespace std;

class Pligon{
  protected:
    int width, height;
  public:
    void set_value(int width, int height) {
      this->width = width;
      this->height = height;
    }
};

class Rec : public Pligon {
  public:
    int area() {
      return (width * height);
    }
};

class Tri : public Pligon {
  public:
    int area() {
      return (width * height) /2;
    }
};

int main (void){
  Rec rec; 
  Tri tri;
  rec.set_value(10, 20);
  tri.set_value(60, 29);
  cout << rec.area() << endl;
  cout << tri.area() << endl;
  return 0;
}