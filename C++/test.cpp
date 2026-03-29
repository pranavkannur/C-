#include <iostream>
int main() {
    const int A = 10;
   // a=20; // This will cause a compilation error because 'a' is declared as const
    std::cout << "Hello, World!" << std::endl;
    std::cout << "The value of a is: " << A << std::endl;
    return 0;
}