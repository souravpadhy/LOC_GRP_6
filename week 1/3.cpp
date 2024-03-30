#include <iostream>

int main() {
    int number, sum = 0, digit;
    
    std::cout << "Enter a number: ";
    std::cin >> number;

    int originalNumber = number; 
    
    if (number < 0) {
        number = -number; 
    }

    do {
        digit = number % 10; 
        sum += digit; 
        number /= 10; 
    } while (number != 0); 

    std::cout << "The sum of the digits of " << originalNumber << " is: " << sum;

    return 0;
}