// Circles on the Farm
#include <iostream>


int main()
{

 int r1, r2, r3;
 
 std:: cin >> r1 >> r2 >> r3;
 
 int sum = r2 + r3;
 
 if (sum <= r1) 
  {
     std::cout << "YES";
  }  
     else
     std::cout << "NO";
 
 
 return 0;
 
}