# C++ Object-Oriented Programming (OOP)

## 1. Classes and Objects
The blueprint vs. the actual thing.

```cpp
class Car {
public:
    string brand;
    int year;

    void drive() {
        cout << "The " << brand << " is driving! 🏎️" << endl;
    }
};

int main() {
    Car myCar;          // Object creation
    myCar.brand = "BMW";
    myCar.year = 2023;
    myCar.drive();
    return 0;
}
```

## 2. Constructors & Destructors
Special functions that run when an object is created or destroyed.

```cpp
class Phone {
public:
    string model;

    // 1. Constructor (Same name as class)
    Phone(string m) {
        model = m;
        cout << model << " created!" << endl;
    }

    // 2. Destructor (Starts with ~)
    ~Phone() {
        cout << model << " destroyed! 💥" << endl;
    }
};
```

## 3. Access Modifiers (Encapsulation)
Controlling who can see your data.

```cpp
class BankAccount {
private:
    double balance; // Hidden from outside 🛑

public:
    // Setter
    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    // Getter
    double getBalance() {
        return balance;
    }
};
```
**Important: Keep variables `private` and use `public` methods to access them!** 🔒

## 4. Inheritance
Reusing code from another class.

```cpp
class Animal {
public:
    void eat() { cout << "Nom nom..."; }
};

// Dog inherits from Animal
class Dog : public Animal {
public:
    void bark() { cout << "Woof!"; }
};
```

## 5. Polymorphism & Virtual Functions
One name, many forms. Using `virtual` allows the program to choose the correct function at runtime.

```cpp
class Shape {
public:
    virtual void draw() { cout << "Drawing shape..."; } // 🤧 Base version
};

class Circle : public Shape {
public:
    void draw() override { cout << "Drawing Circle! ⭕"; }
};
```
**Important: Always use `override` keyword in modern C++ to prevent errors!** 🛠️
