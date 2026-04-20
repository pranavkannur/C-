#include <iostream>

bool isPowerOfThree(int n) {
    if (n == 1) {
        return true;
    }
    if (n < 1) {
        return false;
    }
    if (n % 3 == 0) {
        return isPowerOfThree(n / 3);
    } else {
        return false;
    }
}

int main() {
    int test_cases[] = {27, 1, 3, 9, 0, 2, 12, -3};
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);

    std::cout << "--- Testing isPowerOfThree function ---\n";
    for (int i = 0; i < num_tests; ++i) {
        int n = test_cases[i];
        if (isPowerOfThree(n)) {
            std::cout << n << " is a power of three. (True)\n";
        } else {
            std::cout << n << " is NOT a power of three. (False)\n";
        }
    }

    return 0;
}