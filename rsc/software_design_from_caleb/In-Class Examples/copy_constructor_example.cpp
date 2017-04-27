// This file demonstrates a copy constructor and its use.

#include <iostream>

// Square Class
class Square
{
   public:
      int getSide (void);
	  
	  // "Normal" Constructor
      Square (int side);             
	  
	  // Copy Constructor
      Square (const Square &obj);  
      
	  // Destructor
	  ~Square ();                    

   private:
      int *ptr;
};

//
// Member Functions & Constructor(s)/Destructor
//

Square::Square (int side)
{
    std::cout << "Normal constructor..." << std::endl;
    ptr = new int;
    *ptr = side;
}

Square::Square (const Square &obj)
{
    std::cout << "Copy constructor..." << std::endl;
    ptr = new int;
    *ptr = *obj.ptr;
}

Square::~Square (void)
{
    std::cout << "Freeing memory!" << std::endl;
    delete ptr;
}

int Square::getSide (void)
{
    return *ptr;
}

void getArea (Square obj)
{
	int area = obj.getSide () * obj.getSide ();
    std::cout << "Area of Square : " << area << std::endl;
}

// Test Driver
int main (void)
{
   Square square (15);
   
   Square anotherSquare = square; 

   getArea (square);
   
   getArea (anotherSquare);

   return 0;
}