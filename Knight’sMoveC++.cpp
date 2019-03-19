// Knight’s Move

#include <iostream>

#include <cmath> 


int main() {
    
    
    int  px1, py1, px2, py2; 
    
    std::cin >> px1 >> py1 >> px2 >> py2;
    
    int dx = px1 - px2;
    
   
    dx = std::abs (dx);
   

    
        if (dx == 1 || dx == 2) 
            
            
            std::cout << " Possible ";
            
        
        else  
            
            std::cout << " Impossible ";
            
        
}