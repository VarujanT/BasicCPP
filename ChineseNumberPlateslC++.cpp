//Chinese Number Plates
#include <iostream>

int main() {
 
	int n;
	std::cin >> n;
	 
	int count = 0;
	int  digit, m;
		 	 
	while ( n != 0)
	{ 
		digit = (n % 10);
		n /= 10;
		
		if (digit == 8) 
	  	{	
	  	    ++count;
	  	    m = 1000 * count;
	  	}
	}
	std::cout << m ; 
	
	return 0;
}