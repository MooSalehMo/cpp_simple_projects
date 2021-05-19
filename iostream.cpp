#include <iostream>
using namespace std;

class io {
  private:
    int i, o;
  public:
  io (){i = o = 0;}
  io (int ii, int oo) {
    i = ii; o = oo;
  }
  void ptint (void){
    cout << "i = " << i << "\no = " << o << endl;
  }
  friend istream&operator>>(istream&input, io&ob);
  friend ostream&operator<<(ostream&output, io&ob);
};

// input object
istream&operator>>(istream&input, io&ob){
  input >> ob.i >> ob.o;
  return input;
};

// output opject
ostream&operator<<(ostream&output, io&ob){
  output << "i = " << ob.i << "\to = " << ob.o;
  return output;
}

// function main
int main (void) {
  io ob;
  cout << "Enter number one and two : ";
  cin >> ob;
  cout << ob << endl;
  return 0;
}