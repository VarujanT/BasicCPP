// Leap Years
#include <iostream>

int main()
{
    int year;

    std::cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            
                std::cout << " Leap year";
            else
                std::cout << " Normal year";
        }
        else
            std::cout << " Leap year";
    }
    else
        std::cout << " Normal year";

    return 0;
}