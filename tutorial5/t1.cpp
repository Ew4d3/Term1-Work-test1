#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "This is line " << i + 1 << std::endl;
    if (i == 2) {
        std::cout << "This is the middle line." << std::endl;

    }

    repeat:
        std::cout << "Repeating line " << i + 1 << std::endl;
    }

    while (true) {
        std::cout << "This is an infinite loop. Type 'exit' to break." << std::endl;
        std::string input;
        std::cin >> input;
        if (input == "exit") {
            break;
        }
    }


    never:
        std::cout << "This line will never be executed." << std::endl;
        goto never;

    
    
    return 0;



}