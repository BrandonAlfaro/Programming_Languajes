# C Language

<p align="center">
  <img src="https://raw.githubusercontent.com/BrandonAlfaro/Programming_Languajes/d326a2207cacaa729101cd414f6e2e0dcec708e1/img/C.svg" alt="C Language" width="200">
</p>

## 📝 Table of Contents

- [Introduction](#introduction)
- [Main Characteristics](#main-characteristics)
- [Syntax Overview](#syntax-overview)
- [Advanced Features](#advanced-features)
- [Tools and Ecosystem](#tools-and-ecosystem)
- [Typical Applications](#typical-applications)
- [Strengths and Weaknesses](#strengths-and-weaknesses)
- [Best Practices](#best-practices)
- [Learning Resources](#learning-resources)
- [Summary](#summary)

## Introduction

> **Brief description of the language:**
> C is a procedural and mid-level programming language that combines the efficiency and control of low-level programming with the readability and structure of high-level programming. It provides powerful features such as direct memory manipulation through pointers, while maintaining portability across different systems.

> **Creator and year of creation:**
> C was created by Dennis Ritchie at Bell Labs in 1972.

> **Original purpose and context:**
> The language was originally developed to implement the UNIX operating system, which until then had been written in assembly language. C offered a more flexible, portable, and efficient way to write system software, making UNIX highly portable across platforms. Over time, C became the foundation for many later programming languages (such as C++, C#, Java, and Objective-C).

## Main Characteristics

### 🧩 Programming Paradigms
- **Primarily procedural (structured programming).**  
- Encourages **modularity** through the use of functions.  
- Supports **low-level operations** (close to assembly).  

---

### ⚙️ Compilation / Interpretation Model
- **C is a compiled language.**  
- Source code (`.c` files) is translated into **machine code** by a compiler (e.g., **GCC, Clang**).  
- Provides **high performance** and **direct execution** by the CPU, unlike interpreted languages.  

---

### 🔤 Typing System
- **Static typing**: variable types are defined at compile time.  
- **Weak typing (relative)**: allows some implicit type conversions (e.g., from `int` to `float`).  
- **Type checking**: occurs before program execution.  

---

### 💾 Memory Management
- **Manual memory management** via functions like `malloc`, `calloc`, `realloc`, and `free`.  
- **Pointers** allow direct access and manipulation of memory addresses.  
- No automatic **garbage collector**, the programmer is responsible for avoiding memory leaks.  

---

### 📚 Standard Library & Ecosystem
- Provides a **standard library (libc)** with functions for:  
  - Input/Output → `printf()`, `scanf()`  
  - String manipulation → `strlen()`, `strcpy()`  
  - Memory handling and math operations.  
- A vast **ecosystem of compilers** (GCC, Clang, MSVC) and development tools.  
- Foundation for many **operating systems, embedded systems, and programming languages**.  

## Syntax Overview

### 👋 Hello World Example
The classic first program in C:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

Explanation:

`#include <stdio.h>`: Preprocessor directive to include the standard input/output library

`int main() {}`: Main function where program execution begins

`printf();`: Function to output text to the console

`return 0;`: Indicates successful program termination

---

### 📦 Variables and Data Types

**Variable Declaration:**

```c
type variable_name;
type variable_name = value;
```

**Basic Data Types:**

Integers: `int`, `short`, `long`, `char`

Floating-point: `float`, `double`

Unsigned: `unsigned int`, `unsigned char`

Void: `void` (typeless)

---

### ➕ Operators

**Arithmetic**
```c
+  // Addition
-  // Subtraction
*  // Multiplication
/  // Division
%  // Modulus (remainder)
++ // Increment
-- // Decrement
```

**Relational**

```c
== // Equal to
!= // Not equal to
>  // Greater than
<  // Less than
>= // Greater than or equal to
<= // Less than or equal to
```

**Logical**
```c
&& // Logical AND
|| // Logical OR
!  // Logical NOT
```

**Assignment**
```c
=   // Simple assignment
+=  // Add and assign
-=  // Subtract and assign
*=  // Multiply and assign
/=  // Divide and assign
%=  // Modulus and assign
```

---

### ⌨️ Input/Output Operations

```c
// Output

printf("Text %d %f %c", int_variable, float_variable, char_variable);
// Format specifiers:
// %d - integer
// %f - float
// %c - character
// %s - string
// %lf - double
```

```c
// Input

scanf("%d", &variable); // Read integer
scanf("%f", &variable); // Read float
scanf("%c", &variable); // Read character
```

---

### 🔀 Control Flow Statements

**if-else**
```c
if (condition) {
    // code if true
} else if (another_condition) {
    // code if another condition is true
} else {
    // code if all conditions are false
}
```

**while**
```c
while (condition) {
    // code to repeat
}
```

**do-while**
```c
do {
    // code to repeat (executes at least once)
} while (condition);
```

**for**
```c
for (initialization; condition; increment) {
    // code to repeat
}
```

**switch**
```c
switch (variable) {
    case value1:
        // code for value1
        break;
    case value2:
        // code for value2
        break;
    default:
        // code if no cases match
}
```

---

### 🔧 Functions

**Function Definition**
```c
return_type function_name(parameters) {
    // function body
    return value; // if not void
}
```

**Function Prototypes**
```c
// Declaration (in headers or before main)
int add(int a, int b);

// Implementation (can be after main)
int add(int a, int b) {
    return a + b;
}
```

---

## Advanced Features
## Tools and Ecosystem
## Typical Applications
## Strengths and Weaknesses
## Best Practices
## Learning Resources
## Summary

