//
// Polymorphism Example
//
#include <iostream>

// Polygon Class
class Polygon { 
	// Member variables & functions...
	protected: 
		int width, height; 	
	public: 
		void set_values (int a, int b) 
			{ width=a; height=b; } 
		//virtual int area (void)
			//{ return 0; }
};

// Rectangle class inherits from Polygon
class Rectangle: public Polygon { 
	public: 
		int area(void) 
			{ return width*height; } 
};

// Triangle class inherits from Polygon
class Triangle: public Polygon { 
	public: 
		int area(void) 
			{ return (width*height)/2; } 
};

int main () {
  Rectangle rect;
  Triangle trgl;
  
  // Rectangle/Triangle are types of Polygons...
  Polygon * ppoly1 = &rect;
  Polygon * ppoly2 = &trgl;
  
  // Polymorphism
  ppoly1->set_values (4,5);
  ppoly2->set_values (4,5);
  
  std::cout << rect.area() << '\n';
  std::cout << trgl.area() << '\n';
  
  //std::cout << ppoly1->area() << '\n';
  //std::cout << ppoly2->area() << '\n';
  
  return 0;
}