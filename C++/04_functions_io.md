# C++ I/O & Functions

## 1. Input and Output (I/O)
How the program talks to the user.

```cpp
#include <iostream>
using namespace std; // Avoids typing std:: every time

int main() {
    string name;
    cout << "Enter your name: "; // Output
    cin >> name;                // Input
    
    cout << "Hello " << name << "!" << endl;
    return 0;
}
```
**Important: `cin` stops at the first space. Use `getline(cin, name)` for full names!** 🛑

## 2. Functions
A block of code you can call whenever you need it.

```cpp
// 1. Declaration (tell C++ it exists)
int multiply(int x, int y); 

int main() {
    // 2. Calling the function
    int result = multiply(5, 4); 
    return 0;
}

// 3. Definition (what it actually does)
int multiply(int x, int y) {
    return x * y;
}
```

### Void Functions
Functions that don't return anything.
```cpp
void sayHi() {
    cout << "Hello World!";
}
```

## 3. Function Types & Patterns
Different ways to define and use functions.

### Pass by Value vs. Reference
```cpp
// 1. Pass by Value (makes a copy, original stays same)
void updateValue(int x) { x = 10; } 

// 2. Pass by Reference (works on the original)
void updateRef(int &x) { x = 10; } 
```

### Default Parameters
```cpp
// If age is not provided, it defaults to 18
void checkAge(int age = 18) { 
    cout << "Age: " << age; 
}
```

### Function Overloading
**Same name, different parameters!**
```cpp
int add(int a, int b) { return a + b; }
double add(double a, double b) { return a + b; }
```

## 4. Scope
Where your variables "live".

```cpp
int globalVar = 100; // Accessible everywhere

void test() {
    int localVar = 10; // Only lives inside test()
}
```
