#include <iostream>
#include<fstream>
using namespace std;
#if 0
class Package{

};
class Chip:public Package{

};
#endif
int main() {
  ifstream f;
  f.open("eagle.lbr");
#if 0
  Package qfn20;
  Chip attiny24(qfn20); // big hint here, they are related
  f >> qfn20; // read in from the library
  f >> attiny24; // read in from the library
  cout << chip; // print out everything about the chip
#endif
}


