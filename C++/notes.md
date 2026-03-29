# C++
## 1. Besic code 
```
#include <iostream> // import declaration

int main() {                                     // main function same as 'C ' 
    cout << "Hello, World!" << endl;   // prinf function in  C++
    return 0;                                    // return 0  to end program
}
```
## 2. Besic Data types 
[refrec](https://www.geeksforgeeks.org/cpp/cpp-data-types/)

### 1. Int  (whole numbers)
```
int age = 83;
int number =89779;
```
### 2. double /float ( number including decimal )
```
double price = 10.99;
float gpa = 2.1;   //🤧
```
### 3. char (single charecter)
  **important to use single quotes**
```
char grade = 'F';   //🤧
char symbols = '@'; 
```
### 4. boolean (true or false)
```
boolean student = true;
boolean sold = fulse
```
### 5. string 
object that represent the sequence of charecters similer to c charecter Array or javaScript string

**important to use double quotes**
```
string name = "Pranav";
string day  = "sunday";
```
### 6. void (NULL valve)
The void data type represents the absence of value. We cannot create a variable of void type. It is used for pointer and functions that do not return any value using the keyword void.

## 3. Derived Data Types
### 1. Array:
 A collection of elements of the same type.

 ```
int scores[5] = {90, 85, 88, 92, 79};
 ```
 ### 2. Pointer
  Stores the memory address of another variable.
  ```
  int* ptr = &age;
  ```
  ### 3. Reference
  An alias (another name) for an existing variable.
  ```
  int &ref = age;
  ```
  ### 4. Function
   A block of code that performs a specific task.
   ```
  int add(int a, int b) { return a + b; }
   ```

## 4.  User-Defined Data Types

### 1. Class 
The backbone of Object-Oriented Programming (OOP) in C++.

```
class Student {
public:
    string name;
    int rollNumber;
};
```
### 2. Structure (struct)
 Similar to a class, but members are public by default.

 ```
struct Point {
    int x, y;
};
 ```
 ### 3. Union
  Similar to a struct, but all members share the same memory location.
  ```
  union Data {
    int i;
    float f;
};
  ```
### 4. Typedef
 Creates an alias for an existing type.
 ```
 typedef unsigned long ulong;
 ```
 ### 5. Using
  A modern alternative to typedef (C++11 and later).
  ```
using Number = int;
  ```