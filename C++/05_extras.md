# C++ Extra Essentials

## 1. Comments
Explaining your code to your future self.

```cpp
// This is a single-line comment

/* 
   This is a 
   multi-line 
   comment 
*/
```

## 2. Escape Sequences
Special characters used inside strings.

```cpp
cout << "Hello\nWorld!"; // \n = new line (like endl)
cout << "Item\tPrice";    // \t = tab space
cout << "She said \"Hi\""; // \" = double quote
cout << "C:\\Path";       // \\ = backslash
```

## 3. Namespaces
Used to organize code and prevent name conflicts.

### Standard Namespace
```cpp
// Method 1: The Prefix (Safest)
std::cout << "Hello";

// Method 2: The Shortcut
using namespace std;
cout << "Hello"; // No std:: needed anymore
```

## 4. Basic String Methods
Useful things you can do with strings.

```cpp
string msg = "Hello";

cout << msg.length(); // 5
msg.append(" World"); // "Hello World"
cout << msg[0];       // 'H' (accessing by index)
msg.clear();          // Empties the string
```
