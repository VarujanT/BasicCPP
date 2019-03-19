//Quadratic Equation

#include <iostream>

#include <cmath>


int main() {

    double a, b, c;
    
    std::cin >> a >> b >> c;
    
    
    
        if (a == 0 && b == 0 && c == 0) 
        
        {
            std::cout << "Non-quadratic equation" << std::endl << "Infinite solutions";
        }
        
    
        if (a == 0 && b == 0 && c != 0 ) 
        
        {
             std::cout << "Non-quadratic equation" << std::endl << "No solutions";
        }
        
        
        if  (a == 0 && b != 0 && c != 0)
        
        {
            double x = c / (-b);
            
            std::cout << "Non-quadratic equation" << std::endl << "One solution:" << x;
        }
        
       
         
        if (a != 0)
        
        {
            double D = ((b * b) - 4 * a * c);
            
            double p_root = (((-b) + sqrt (D)) / (2 * a));
            
            double n_root = (((-b) - sqrt (D)) / (2 * a));
            
            
                
                if (D == 0)
                
                    {
                        std::cout << D << std::endl << "Quadratic equation" << std::endl << "One root:" << p_root << n_root  ;
                    }
                
                
                else if (D > 0)
                
                    {
                   
                    std::cout <<  "Quadratic equation"<< std::endl << "Discriminant:" << D <<std::endl;
                    
                    std::cout << "Two solutions:" <<  n_root << ";"<< p_root;
                    }
                    
                    
                else
                
                    {
                    
                    std::cout <<  "Quadratic equation" << std::endl << "Discriminant:" << D << std::endl;
                    
                    std::cout << "No Solutions";
                    }
                    
        }
    
    
    return 0;


}