#include <iostream>

int main()
{
    int num;
    
    do      // Using the do/while loop to keep asking for num till num <= 0
            // Could also use while(true) loop and add the relevant break;
    {
        std::cout << "Please type in a number: ";
        std::cin >> num;
        
        if (num <= 0)
        {
            std::cout << "Thanks and bye!" << std::endl;
            break;         // To exit the loop
        }
        else
        {
            int factorial = 1;
            
            for (int i = 1; i <= num; i++)
            {
                factorial *= i;
            }
            
            std::cout << "The factorial of the number " << num << " is " << factorial << std::endl;
        }
        
    } while(true);     // Infinite loop, exits via break
    
    return 0;
}
