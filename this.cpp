#include <iostream>
using namespace std;

class a {
  private:
    int y;
  public:
    void s(int y) {
      this-> y = y;
    }
    void print() {
      cout << y << endl;
    }
};

int main (void){
  a ob;
  ob.s(10);
  ob.print();
  return 0;
}