//Factorial

#include <iostream>

int main()
{  
    int n;

    std::cin >> n;

    int factorial = n;
	
	int counter = 1;
    
    if ( n >= 1 && n <= 12 )
    
    {
          
        while (counter != n)
        
        {
            factorial = factorial * (n - counter);
    
            counter++;
    
        }
    
        std::cout << factorial;
    
    }
}