// Example class that demonstrates the use of the keyword 'this' pointer.
// By: Ryan Rybarczyk
#include <iostream>

// Square Class
class Square
{
	public:
		// Constructor
		Square(int side) 
			: side_(0)
		{
			side_ = side;
		}
	  
		// Calculate the area of a square.
		int getArea()
		{
			return (side_ * side_); 
		}

		// Compare squares based upon their area.
		bool compareArea(Square square)
		{
			return this->getArea() > square.getArea();
		}
	  
	// Memeber Variables..	  
	private:
		int side_;
};

int main(void)
{
	// Create two instances of a square.
	Square square_1(15);    
	Square square_2(7);  

	// Print out the areas of the respective squares.
	std::cout << "Square #1 Area:" << square_1.getArea() << std::endl;
	std::cout << "Square #2 Area:" << square_2.getArea() << std::endl;	

	// Compare square_1 with square_2 to see which is larger, in terms of area.
	if(square_1.compareArea(square_2))
	{
		std::cout << "Square #2 is smaller than Square #1." << std::endl;
	}
	else
	{
		std::cout << "Square #2 is equal to or larger than Square #1." << std::endl;
	}
	
	return 0;
}