#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Choose an operation (+, -, *, /): ";
    std::cin >> op;

    switch (op) {
        case '+':
            std::cout << "Sum: " << num1 + num2;
            break;
        case '-':
            std::cout << "Difference: " << num1 - num2;
            break;
        case '*':
            std::cout << "Product: " << num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "Quotient: " << num1 / num2;
            } else {
                std::cout << "Cannot divide by zero!";
            }
            break;
        default:
            std::cout << "Invalid operator!";
            break;
    }

    return 0;
}