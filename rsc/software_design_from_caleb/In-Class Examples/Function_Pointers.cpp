// Function Pointers Example
// By: Ryan Rybarczyk

#include <iostream>

// Takes an integer and adds 7 to it.
int getX(int z)
{
	int x = 0;
	
    x = 7 + z;

    return x;
}

// Takes an integer and adds 15 to it. 
int getY(int z)
{
	int y = 0;
	
    y = 15 + z;
    
	return y;
}

// Main Function 
int main()
{
	// Function pointer - ptr is a pointer to the function
	// getX and has one parameter of type int.
    int (*ptr)(int) = getX; 
	
	// Print out the result of the call to ptr with the value
	// 5 passed as a parameter.
	std::cout << ptr(5);
	
	// Now point the ptr to the function getY.
    ptr = getY;
 
    return 0;
}
