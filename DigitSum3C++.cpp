// Digit Sum 3
#include <iostream>


int main()  {
 
     int value, n, sum;
     
     std::cin >> value;
     
     n = value;
     
     while ( n != 0)
     
        {
            sum = sum + n % 10;
         
            n = n / 10;
        }
     
     std::cout << "The sum of digits of " << value << " " << "is" << " " << sum ; 
     
     return 0;
}