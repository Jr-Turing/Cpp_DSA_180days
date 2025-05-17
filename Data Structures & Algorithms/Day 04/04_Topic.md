# Day 04 – If-Else Statements & Loops 🔄

## Table of Contents
- [1. User Input in C++](#1-user-input-in-c)
- [2. Assignment Operations](#2-assignment-operations)
- [3. Type Casting](#3-type-casting)
- [4. Conditionals (If-Else)](#4-conditionals-if-else)
- [5. Loops](#5-loops)

## 1. User Input in C++

### Basic Input
```cpp
int num;
cin >> num;
```

### Multiple Inputs
```cpp
int a, b;
cin >> a >> b;
```

## 2. Assignment Operations

### Basic Assignment
- Uses `=` operator to assign value to a variable

### Compound Assignment Operators
| Operator | Description | Example |
|----------|-------------|---------|
| `+=` | Adds and assigns | `a += 3` |
| `-=` | Subtracts and assigns | `a -= 3` |
| `*=` | Multiplies and assigns | `a *= 3` |
| `/=` | Divides and assigns | `a /= 3` |

#### Example
```cpp
int a = 5;
a += 3;  // Now a = 8
```

## 3. Type Casting

### Types of Casting

1. **Implicit Casting (Automatic)**
   - Performed automatically by the compiler
   - Example: `char` to `int` conversion

2. **Explicit Casting (Manual)**
   - Done manually using `(type)` syntax
   ```cpp
   int a = 10;
   float b = (float)a;
   ```

## 4. Conditionals (If-Else)

### Syntax
```cpp
if (condition) {
    // code block executed if condition is true
} else {
    // code block executed if condition is false
}
```

### Example
```cpp
int age;
cin >> age;

if (age >= 18) {
    cout << "Adult";
} else {
    cout << "Minor";
}
```

## 5. Loops

### Types of Loops

1. **For Loop**
   - Used when number of iterations is known
   ```cpp
   for(int i = 1; i <= 5; i++) {
       cout << i << " ";
   }
   ```

2. **While Loop**
   - Used when iterations depend on a condition
   - Number of iterations unknown beforehand

3. **Do-While Loop**
   - Runs at least once
   - Checks condition after execution

### Real-life Analogy
> 🫖 Making 10 cups of tea with 1 utensil → Run the same steps 10 times = loop

## Summary 📝

Key concepts covered:
- ✅ User input using `cin`
- ✅ Assignment operations (`+=`, `*=`, etc.)
- ✅ Type casting (implicit and explicit)
- ✅ If-else statements for decision making
- ✅ Loops for repetitive tasks

> 💡 **Note:** These concepts form the foundation of logic building in any programming language.

---
*Happy Coding! 👨‍💻*

