#include <iostream>
#include <string>

int main() {
    std::string userInput;

    std::cout << "Please type something: ";
    std::getline(std::cin, userInput);

    std::cout << "You entered: " << userInput << std::endl;
    
    return 0;
}