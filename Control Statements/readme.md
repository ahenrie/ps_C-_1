# Control Statements in C++

Control statements are fundamental structures that control the flow of execution in a program. They enable you to make decisions and repeat certain actions based on conditions. In C++, there are three main types of control statements: **if-else**, **switch**, and **loops**.

### If-Else Statements

The `if-else` statement is used to perform different actions based on different conditions. It follows this syntax:

```cpp
if (condition) {
    // Code to execute if condition is true
} else {
    // Code to execute if condition is false
}

Example:
```cpp
int age = 18;
if (age >= 18) {
    cout << "You are an adult." << endl;
} else {
    cout << "You are not yet an adult." << endl;
}
```

### Switch Statement

The switch statement allows you to select one of many code blocks to be executed. It's often used with integer or character expressions.

```cpp
switch (expression) {
    case value1:
        // Code to execute if expression == value1
        break;
    case value2:
        // Code to execute if expression == value2
        break;
    // ... more cases ...
    default:
        // Code to execute if none of the cases match
}
```
Example:
```cpp
char grade = 'B';
switch (grade) {
    case 'A':
        cout << "Excellent!" << endl;
        break;
    case 'B':
        cout << "Good job!" << endl;
        break;
    case 'C':
        cout << "Well done!" << endl;
        break;
    default:
        cout << "Keep working hard!" << endl;
}
```

## Loops

Loops are used to execute a block of code repeatedly while a certain condition is true.

### While Loop

The while loop repeats a statement or a block of statements while a given condition is true.

Example:
```
int i = 1;
while (i <= 5) {
    cout << i << " ";
    i++;
}
```

### For Loop

The for loop is used to repeatedly execute a block of statements for a specified number of times.

```cpp
for (initialization; condition; increment/decrement) {
    // Code to execute in each iteration
}
```

Example:
```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}
```
