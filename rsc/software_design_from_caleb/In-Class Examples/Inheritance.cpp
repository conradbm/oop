//
// Demo for constructors and derived classes.
//
#include <iostream>

// Mother (Base) Class
class Mother {
  // Two different constructors...	
  public:
    Mother (void)
      { std::cout << "Mother: no parameters\n"; }
    Mother (int a)
      { std::cout << "Mother: int parameter\n"; }
};

// Daughter class derived from (Base) Mother class.
class Daughter : public Mother {
  public:
    Daughter (int a)
      { std::cout << "Daughter: int parameter\n\n"; }
};

// Son class derived from (Base) Mother class.
class Son : public Mother {
  public:
    Son (int a) : Mother (a)
      { std::cout << "Son: int parameter\n\n"; }
};

// Driver Method
int main () {
  Daughter amy (0);
  Son ryan (0);
  
  return 0;
}