#include<iostream>
using namespace std;
 
class myclass {
  private:
    int y, x, z;     
  public:
    myclass(){
      y = x = z =0;
    };
    myclass (int y, int x, int z) {
      this->y = y;
      this->x = x;
      this->z = z;
    };
    // void print(void) {
    //   cout << "y = " << y << "\tx = " << x << "\tz = " << z << endl;
    // };
    int operator==(myclass ob) {
      return (y == ob.y && x == ob.x && z == ob.z);
    };
};

int main(){
  myclass ob(10, 10, 10), oob(10, 1, 10);

  if(ob == oob) 
      cout << "true" << endl;
  else
    cout << "false" << endl;
  return 0;
}
