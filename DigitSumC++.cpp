// Sum of three digit numbers without loop

#include <iostream>


int main()
{
  
  int sum, num;
  
  std::cin >> num;
  
  sum = num % 10 + ( num / 10 ) % 10 + ( num / 100 );
  
  
  std::cout << sum ;
  
}