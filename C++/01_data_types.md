# C++ Data Types

## 1. Basic code 
```cpp
#include <iostream> 
using namespace std; // Important: lets us use cout and endl without std:: prefix

int main() {                                     
    cout << "Hello, World!" << endl;   // Output function in C++
    return 0;                                    
}
```
## 2. Basic Data types 
[Reference](https://www.geeksforgeeks.org/cpp/cpp-data-types/)

### 1. Int  (whole numbers)
```cpp
int age = 83;
int number = 89779;
```
### 2. double / float (number including decimal)
```cpp
double price = 10.99;
float gpa = 2.1;   //🤧
```
### 3. char (single character)
**Important: use single quotes**
```cpp
char grade = 'F';   //🤧
char symbols = '@'; 
```
### 4. bool (true or false)
```cpp
bool student = true;
bool sold = false; // Fixed spelling and added semicolon
```
### 5. string 
Object that represents a sequence of characters (similar to C-style arrays or JavaScript strings).

**Important: use double quotes**
```cpp
string name = "Pranav";
string day  = "sunday";
```
### 6. void (NULL value)
Represents the absence of value. We cannot create a variable of `void` type. It is used for pointers and functions that do not return any value.

## 3. Derived Data Types
### 1. Array
A collection of elements of the same type.
 ```cpp
int scores[5] = {90, 85, 88, 92, 79};
 ```
 ### 2. Pointer
Stores the memory address of another variable.
  ```cpp
  int* ptr = &age;
  ```
  ### 3. Reference
An alias (another name) for an existing variable.
  ```cpp
  int &ref = age;
  ```

## 4. User-Defined Data Types

### 1. Class 
The backbone of Object-Oriented Programming (OOP) in C++.
```cpp
class Student {
public:
    string name;
    int rollNumber;
};
```
### 2. Structure (struct)
Similar to a class, but members are public by default.
 ```cpp
struct Point {
    int x, y;
};
 ```
 ### 3. Union
All members share the same memory location.
  ```cpp
  union Data {
    int i;
    float f;
};
  ```
### 4. Typedef
Creates an alias for an existing type.
 ```cpp
 typedef unsigned long ulong;
 ```
 ### 5. Using
A modern alternative to typedef (C++11 and later).
  ```cpp
using Number = int;
  ```
