// Example: STDIN/STDOUT + StringStream
// By: Ryan Rybarczyk

#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>

int main(void) {
  	// String Input
	std::string inputStr;
	
	bool quit = false;
	
	while (!quit)
	{
		// Example of stdio (C)
		printf("Enter all of the colors you can think of:\n");
	
		// Method for retrieving the input from the console by line.
		getline(std::cin, inputStr);
		
		if (inputStr.compare("QUIT") == 0) {
			quit = true;
		} else {
			std::cout << "You entered: " << inputStr << std::endl;
			
			// StringStream Example
			std::istringstream iss(inputStr);
			
			int counter = 0;
			
			// Checks to ensure we don't overrun the string buffer.
			while (!iss.eof())
			{
				counter++;
				
				// StringStream Power!
				std::string val;
				iss >> val;
				std::cout << "String #" << counter << ": " << val << std::endl;
			}
		}
	}
	
	std::cout << "Goodbye!" << std::endl;
	
}