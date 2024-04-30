#include <iostream>
#include <string>

int main(){

    int* num = new int;

    std::string* str = new std::string;

    std::cout << "Enter an integer: ";
    std::cin>> *num;

    std::cout << "Enter a string: ";
    std::cin.ignore();
    std::getline(std::cin, *str);

    std::cout << "Your integer: " << *num << std::endl;
    std::cout << "Your string: " << *str << std::endl;

    delete num;
    delete str;

    return 0;
}