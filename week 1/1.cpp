#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; ++i) {
             if (i % 3 == 0) {
            std::cout << "Fizz ";
        } else if (i % 5 == 0) {
            std::cout << "Buzz ";
        } else {
            std::cout << i << " ";
        }
    }
    return 0;
}