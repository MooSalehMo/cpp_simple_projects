#include <iostream>
using namespace std;

// abstruct
class Pligon{
  protected:
    int width, height;
  public:
    void set_value(int width, int height) {
      this->width = width;
      this->height = height;
    }
    virtual int area() = 0;
    int printarea(){
      return (this->area());
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
  Pligon *p1, *p2;

  p1 = &rec;// early binding
  p2 = &tri;// early binding

  p1 -> set_value(5, 4);
  p2 -> set_value(6, 2);

  // cout << "p1 = " << p1 -> area() << endl;
  // cout << "p2 = " << p2 -> area() << endl;

  Pligon *arr[2] = {&rec, &tri};
  for (size_t i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
    cout << "area" << i +1  << " = " << arr[i]->area() << endl; // late binding
    cout << "printarea" << i + 1 << " = " << arr[i]->printarea() << endl; // late binding
  }
  
  
  return 0;
}