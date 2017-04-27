#include <iostream>
#include <assert.h>
 
int main()
{
    assert(2+2==4);
    std::cout << "Execution continues past the first assert\n";
    assert(2+2==5);
    std::cout << "Execution continues past the second assert\n";
	
	static const int x = 4;
	// Reminder: g++ -std=c++11 
	static_assert(x > 7 && x < 15, "Constant not in expected range.");
}
