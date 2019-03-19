//Prime Factorization
# include <iostream>
# include <math.h>
 
void primeFactors(int n) {
    while (n % 2 == 0)
    {
        std::cout << 2 << "*";
        n = n / 2;
    }
 
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            std::cout << i << "*";
            n = n / i;
        }
    }
    if (n > 2)
        std::cout << n;
}
 
int main(){
    int n;
    std::cin >> n ;
    primeFactors(n);
    
	return 0;
}