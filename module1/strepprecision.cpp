#include <iostream>
#include <iomanip>

int main() {
    double number = 3.14159;
    std::cout << std::fixed << std::setprecision(2) << number << std::endl;
    return 0;
}
