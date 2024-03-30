#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    double diameter = 2 * radius;

    double circumference = 2 * M_PI * radius;

    double area = M_PI * pow(radius, 2);

    std::cout << "Diameter of the circle: " << diameter << std::endl;
    std::cout << "Circumference of the circle: " << circumference << std::endl;
    std::cout << "Area of the circle: " << area << std::endl;

    return 0;
}