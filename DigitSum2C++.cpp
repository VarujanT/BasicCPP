// Digit Sum 2
#include <iostream>

int main()
{
 
 int value;
 
 int n;
 
 int sum;
 
 std::cout << "enter the number:" <<" ";
 
 std::cin >> value;
 
 n = value;
 
 while ( n != 0)
    {
        sum = sum + n % 10;
     
        n = n / 10;
    }
 
 std::cout << "the sum of the digits" << " "<< value << " "<< "is" <<" "<< sum ; 
 
 return 0;
}