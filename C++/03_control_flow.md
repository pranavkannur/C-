# C++ Control Flow

## 1. Conditionals (Decision Making)
Making the code do different things based on conditions.

### If - Else
```cpp
int age = 18;

if (age >= 18) {
    cout << "You can vote!";
} else {
    cout << "Too young!";
}
```

### Switch Statement
Best for checking one variable against many constant values.
```cpp
char grade = 'A';

switch (grade) {
    case 'A': cout << "Excellent!"; break;
    case 'B': cout << "Good job!"; break;
    default: cout << "Keep trying!";
}
```
**Important: always use `break` or it will "fall through" to the next case!** 🏃💨

## 2. Loops (Repetition)
Running the same code multiple times.

### For Loop
Best when you know how many times to run.
```cpp
for (int i = 0; i < 5; i++) {
    cout << "Iteration: " << i << endl;
}
```

### While Loop
Best when you don't know the exact count.
```cpp
int energy = 10;
while (energy > 0) {
    cout << "Running...";
    energy--;
}
```

### Do-While Loop
**Guaranteed to run at least once!**
```cpp
int x = 0;
do {
    cout << "This prints once even if x is 0";
} while (x > 10);
```
