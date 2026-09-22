#include <iostream>

int add(int first, int second) {
    return first + second;
}

double add(double first, double second) {
    return first + second;
}

int add(int first, int second, int third) {
    return first + second + third;
}

int main() {
    std::cout << "Sum of two integers: " << add(15, 25) << '\n';
    std::cout << "Sum of two doubles: " << add(4.5, 2.5) << '\n';
    std::cout << "Sum of three integers: " << add(15, 25, 35) << '\n';

    return 0;
}
