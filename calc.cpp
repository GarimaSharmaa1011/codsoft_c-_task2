#include <iostream>

int main() {
    double num1, num2;
    char operation;

    // Welcome message
    std::cout << "Welcome to the Simple Calculator!" << std::endl;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Display operation options
    std::cout << "Choose an operation:" << std::endl;
    std::cout << " +  : Addition" << std::endl;
    std::cout << " -  : Subtraction" << std::endl;
    std::cout << " *  : Multiplication" << std::endl;
    std::cout << " /  : Division" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> operation;

    // Perform the chosen operation
    switch (operation) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << (num1 + num2) << std::endl;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << (num1 - num2) << std::endl;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << (num1 * num2) << std::endl;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                std::cout << num1 << " / " << num2 << " = " << (num1 / num2) << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operation selected." << std::endl;
    }

    return 0;
}
