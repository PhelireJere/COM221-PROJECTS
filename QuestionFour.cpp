#include <iostream>

int main() {
    int input;
    
    while (true) {
        std::cout << "Enter an integer value between 5 and 10: ";
        std::cin >> input;
        
        if (std::cin >> input) {
            if (input >= 5 && input <= 10){
                break;
            }
            
            else{
                std::cout << "Sorry, you entered an invalid number. Please try again" << std::endl;
            }

            std::cin.clear();
            std::cin.ignore(10000, '\n');
 
            
        }
    }
    
    std::cout << "Your input value" << input << "has been accepted\n" << std::endl;
    
    return 0;
}
