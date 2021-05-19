#include <iostream>
using namespace std;

class M {
  private:
    int a,b;
  public:
    M () {
      a = 0;
      b = 0;
    }
    M (int aa, int bb) {
      a = aa;
      b = bb;
    }
    void showdata(){
      cout << "a = " << a << "\t b = " << b << endl ; 
    }
    friend M sum(M y, M x, M z);
};

M sum(M y, M x, M z) {
  z.a = y.a + x.a;
  z.b = y.b + x.b;

  cout << "sum m + mm = " <<(z.a + z.b) << endl;
  return (z);
}

int main(void){
  M m(10, 20), mm(2, 4), mmm;
  sum(m, mm, mmm).showdata();
  return 0;
}