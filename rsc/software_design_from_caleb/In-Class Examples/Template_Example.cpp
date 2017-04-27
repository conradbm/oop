#include <iostream>
#include <string>

template <typename T, typename T2>
T getMax (T a, T2 b) 
{ 
    return a < b ? b:a; 
} 

int main ()
{
    int i = 15;
    int j = 7;
    std::cout << "Max Value #1: " << getMax(i, j) << std::endl; 

    double f1 = 15.1; 
    double f2 = 87.1; 
    std::cout << "Max Value #2: " << getMax(f1, f2) << std::endl; 

    std::string s1 = "Ryan"; 
    std::string s2 = "Rybarczyk"; 
    std::cout << "Max Value #3: " << getMax(i, f2) << std::endl; 

   return 0;
}