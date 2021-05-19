#include <iostream>
using namespace std;
 
int main (void) {
  int *p;

  p = new int;
  *p = 30;
  cout << p << endl;// location in Memory
  cout << &p << endl;// address
  cout << *p << endl;// value  
  
  delete p;
  cout << p << endl;
  cout << &p << endl;
  cout << *p << endl;
}
