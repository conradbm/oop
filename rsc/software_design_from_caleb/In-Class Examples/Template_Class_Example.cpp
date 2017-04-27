// Template Class Example
// By: Ryan Rybarczyk

#include <iostream>
#include <string>

// Template Game Class
template <class T>
class Game 
{
	// We should really create a constructor, copy constructor, and destructor...
	// Ryan would take off points if we didn't do this...
	
	// Default constructor created by compiler...whew.

	// Function to decide the winner of the game.
	public:
		T getWinner(T, T); 
};

// Winner...Winner...Chicken Dinner
template <class T>
T Game<T>::getWinner(T a, T b) 
{ 
	return a < b ? b:a; 
} 

// Program Driver
int main ()
{
	// Create two instances of the Game object (int/string).
	Game<int> intGame;
	Game<std::string> stringGame;
	
    int i = 15;
    int j = 7;
    std::cout << "Winner: " << intGame.getWinner(i, j) << std::endl; 
	
	std::string e = "Ryan";
    std::string f = "Rybarczyk";
    std::cout << "Winner: " << stringGame.getWinner(e, f) << std::endl; 

   return 0;
}