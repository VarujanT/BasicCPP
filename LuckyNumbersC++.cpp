//Lucky Numbers
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int count = 1;
    int oddSum = 0;
    int evenSum = 0;
	
    while (n!=0) {
      if (count % 2 == 0)
      {
        evenSum += n % 10;
        n /= 10;
      }
      else
      {
        oddSum += n % 10;
        n /= 10;
      }
      count++;
     }
    
    if(count % 2 == 0)
    {
      int tmp=oddSum;
      oddSum=evenSum;
      evenSum=tmp;
    }
     
    if (oddSum==evenSum)
       std::cout <<"Yes";
    else
       std::cout << "No";
     
}