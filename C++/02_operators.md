# C++ Operators & Variables

## 1. Variables & Constants
Ways to store data that either changes or stays the same.

```cpp
int score = 0;          // Can change
const int SPEED_LIMIT = 60; // Cannot change (read-only)
constexpr int DAYS = 7;     // Evaluated at compile time (faster)
```

## 2. Arithmetic Operators
Basic math for your program.

```cpp
int a = 10, b = 3;

int sum = a + b;   // 13
int diff = a - b;  // 7
int prod = a * b;  // 30
int quot = a / b;  // 3 (integer division drops decimals!)
int rem = a % b;   // 1 (remainder/modulo)
```

## 3. Relational & Logical Operators
Used for comparisons (always returns `true` or `false`).

```cpp
// Relational
bool isGreater = (10 > 5);   // true
bool isEqual = (10 == 10);   // true
bool isNotEqual = (10 != 5); // true

// Logical
bool result = (5 > 2) && (10 < 20); // AND (both must be true)
bool result2 = (5 > 2) || (10 < 2); // OR (one must be true)
bool result3 = !(5 > 2);            // NOT (flips the value)
```

## 4. Increment / Decrement
**Shortcut for adding or subtracting 1**
```cpp
int count = 10;
count++; // count becomes 11
count--; // count becomes 10 again
```
