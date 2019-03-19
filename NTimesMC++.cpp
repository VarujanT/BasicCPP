#include <iostream>

int main() {
    
    int n, m;
    std::cin >> n >> m;
    std::cout << n << "*" << m << "=";
    for  ( int i = 0; i < m; ++i)
    { 
        if (i == m - 1) 
        {
        std::cout << n;
        break;
        } 
        std::cout << n << '+';
    }
    std::cout << '=' << n * m;

}