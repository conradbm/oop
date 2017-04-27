// Demonstration of Template Specialization.
// By: Ryan Rybarczyk
#include <iostream>
#include <string>

// Generic Template Class
template<typename T>   
class Game
{
	// We should really create a constructor, copy constructor, and destructor...
	// Ryan would take off points if we didn't do this...
	
	// Default constructor created by compiler...whew.
	
	public:
		T add(T,T);
	
};

// Adds two items of type T.
template <class T>
T Game<T>::add(T a, T b) 
{ 
	return a+b; 
} 

// Specialized Template Class (Explicit)
template<>   
class Game<double>
{
	// We should really create a constructor, copy constructor, and destructor...
	// Ryan would take off points if we didn't do this...
	
	// Default constructor created by compiler...whew.
	
	public:
		double add(double x, double y);
	
};

// Adds two doubles + 10.5
double Game<double>::add(double a, double b) 
{ 
	return a+b+10.5; 
} 

// Driver
int main()
{
	// Create three different types of Game.
	Game<int> genericIntGame;
	Game<std::string> genericStringGame;
	Game<double> doubleGame;
	
    // Makes use of the generic template.
    std::cout << genericIntGame.add(2,2) << std::endl; 
	std::cout << genericStringGame.add("Ryan","Rybarczyk") << std::endl;
    
	// Makes use of the (explicit) specialized template.
    std::cout << doubleGame.add(15.0,7.0) << std::endl;
}
