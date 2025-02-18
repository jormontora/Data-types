#include <iostream>
#include <iomanip> 

int main() {
    char symbol;
    
    std::cout << "Enter Symbol: ";
    std::cin >> symbol;
    
    std::cout << "Symbol: " << symbol << std::endl;
    std::cout << "(10x)code: " << (int)symbol << std::endl;
    std::cout << "(16x)code: 0x" << std::hex << (int)symbol << std::endl;
    
    return 0;
}
