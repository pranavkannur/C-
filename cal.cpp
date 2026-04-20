#include <iostream> 
using namespace std; // Important: lets us use cout and endl without std:: prefix

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int main() {  
    int a,b; // Declare two integer variables
    char op;
    cout << "Enter first number: "; // Prompt user for first number                                   
    cin >> a;
    cout << "Enter second number: "; // Prompt user for second number
    cin >> b;
    cout << "Enter operator(eg +, -, *, /): "; // Prompt user for operator
    cin >> op;
    switch (op){
        case '+':
            cout << "Result: " << add(a,b) << endl; // Call add function and print result
            break;
        case '-':
            cout << "Result: " << subtract(a,b) << endl; // Call subtract function and print result
            break;
        case '*':
            cout << "Result: " << multiply(a,b) << endl; // Call multiply function and print result
            break;
        case '/':
            if (b != 0) {
                cout << "Result: " << divide(a,b) << endl; // Call divide function and print result
            } else {
                cout << "Error: Division by zero is not allowed." << endl; // Handle division by zero error
            }
            break;
        default:
            cout << "Invalid operator. Please use +, -, *, or /." << endl; // Handle invalid operator error
    }
    
    return 0;                                    
}