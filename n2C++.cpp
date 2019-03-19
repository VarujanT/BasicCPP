//Determine if the given positive integer is an integer power of 2
#include <iostream>


int main() {
    int n;
    std::cin >> n;
    if (n == 0) 
      return 0;
   
    while (n != 1)
    {
        n /= 2;
        if (n % 2 != 0 && n != 1)
        { 
            std::cout << "No"; 
			return 0;
        }
    }
    std::cout << "Yes";
}