// C++ Functors Example
// By: Ryan Rybarczyk

#include <iostream>

// Functor Class 
class myFunctorClass
{
	// Member functions and variables.
    public:
		// Constructor
        myFunctorClass (int x) : _x( x ) {}
		// Overloading the function call operator '()'
        int operator() (int y) { return _x + y; }
    private:
        int _x;
};

// Main Function 
int main()
{
	// Creates a functor called addFive. 
    myFunctorClass addFive( 5 );
    
	// Prints out the result of a dynamically created
	// funcation named addFive at runtime - result will
	// be 11.
	std::cout << addFive( 6 );
 
    return 0;
}
