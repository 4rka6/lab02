#include <iostream> // for std::cout and std::getline
#include <string>   // for std::string

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Hello world from " << name << "!" << std::endl;
    return 0;
}
