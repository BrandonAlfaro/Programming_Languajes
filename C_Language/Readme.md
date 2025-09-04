# C Language

<p align="center">
  <img src="https://raw.githubusercontent.com/BrandonAlfaro/Programming_Languajes/d326a2207cacaa729101cd414f6e2e0dcec708e1/img/C.svg" alt="C Language" width="200">
</p>

## Table of Contents

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

---
---

## Introduction

> **Brief description of the language:**
> C is a procedural and mid-level programming language that combines the efficiency and control of low-level programming with the readability and structure of high-level programming. It provides powerful features such as direct memory manipulation through pointers, while maintaining portability across different systems.

> **Creator and year of creation:**
> C was created by Dennis Ritchie at Bell Labs in 1972.

> **Original purpose and context:**
> The language was originally developed to implement the UNIX operating system, which until then had been written in assembly language. C offered a more flexible, portable, and efficient way to write system software, making UNIX highly portable across platforms. Over time, C became the foundation for many later programming languages (such as C++, C#, Java, and Objective-C).

---
---

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

---
---

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
---

## Advanced Features

### 🏗️ Object-Oriented Programming concepts

C is not an object-oriented language, but many OOP principles can be implemented manually:

- Encapsulation → achieved using structs with functions that operate on them.

- Polymorphism → simulated via function pointers stored in structs.

- Inheritance → approximated by embedding one struct inside another.

---

### ⚠️ Error/Exception handling

- C does not provide built-in exception handling like try-catch.

- Error handling is typically done through:

    - Return codes (0 for success, non-zero for errors).

    - errno global variable for specific error codes.

    -   setjmp / longjmp functions (from <setjmp.h>) to simulate non-local jumps.

---

### 🔄 Generics/Templates/Polymorphism

- C does not support templates like C++.

- Generic programming can be approximated by:

    - Macros (#define) to generate type-specific code.

    - void* pointers for storing data of any type, commonly used in data structures.

---

### 📦 Modules, libraries, or packages

- Modular programming is achieved by splitting code into header files (`.h`) and source files (`.c`).

- Developers can create and link static libraries (`.a`) and dynamic/shared libraries (`.so`, `.dll`).

---

### 🌟 Special features unique to the language

- Direct Memory Access with Pointers → fine-grained control over hardware.

- Preprocessor Directives (`#define`, `#include`, `#ifdef`) → conditional compilation.

- Bitwise Operations → essential for low-level programming.

- Portability → same C code can run on multiple architectures.

- Low-Level Systems Access → ideal for OS, embedded systems, and drivers.

---
---

## Tools and Ecosystem

### 🖥️ Common IDEs and Editors

C code can be written in a variety of editors and IDEs depending on your platform and preferences:

- Visual Studio (Windows) → full-featured IDE with debugging tools.

- Code::Blocks (cross-platform) → lightweight IDE, easy for beginners.

- Eclipse CDT → supports C/C++ projects with plugins.

- Vim / Emacs / VS Code → text editors with extensions for C syntax highlighting and build integration.

---

### ⚙️ Build Systems and Compilers

- Compilers translate C code into machine code:

    - GCC (GNU Compiler Collection) – cross-platform, widely used.

    - Clang – fast, provides detailed warnings and diagnostics.

    - MSVC – Microsoft Visual C++ compiler for Windows.

- Build systems automate compilation and linking:

    - Make / Makefiles – define rules to compile multiple files efficiently.

    - CMake – cross-platform build system, generates platform-specific projects.

---

### 📦 Package Managers


- C itself does not have a native package manager like Python or Node.js.

- Developers often rely on system-level or third-party tools:

    - pkg-config → manages library flags for compilation.

    - vcpkg (Windows) → cross-platform C/C++ library manager.

    - Conan → C/C++ package manager for dependencies in modern projects.

---

### 📚 Frameworks and Libraries

C has a rich ecosystem of libraries and frameworks for different domains:

- Standard C Library (libc) → I/O, string manipulation, math, memory.

- POSIX libraries → file system, threads, sockets, networking.

- Graphics / GUI → SDL, GTK, Allegro.

- Embedded / Microcontrollers → STM32 HAL, Arduino libraries.

- Scientific / Math → GSL (GNU Scientific Library), LAPACK, BLAS.

---
---

## Typical Applications

### 💻 Common Fields Where C is Used

C is widely used in areas where performance, low-level access, and portability are crucial:

- Operating Systems → core system development, kernels, drivers.

- Embedded Systems → microcontrollers, IoT devices, automotive systems.

- System Utilities → compilers, interpreters, command-line tools.

- Game Engines / Graphics → performance-critical modules.

- Networking and Communications → protocol implementations, servers.

- Scientific and High-Performance Computing → simulations, numerical libraries

### 🌟 Examples of Popular Projects / Software

C has been the foundation of many widely-used and important software projects:

- UNIX Operating System → originally written entirely in C.

- Linux Kernel → core system written primarily in C.

- Python Interpreter (CPython) → reference implementation written in C.

- SQLite → lightweight, fast embedded database engine.

- Redis → high-performance in-memory database written in C.

- GCC Compiler → GNU Compiler Collection itself is written in C.

---
---

## Strengths and Weaknesses

### ✅ Advantages

- High Performance → compiled to machine code, close to hardware.

- Portability → same C code can run on multiple platforms with minor changes.

- Low-Level Access → pointers, memory management, and hardware manipulation.

- Foundation for Other Languages → many modern languages (C++, C#, Java) are influenced by C.

- Rich Ecosystem → standard library (libc), compilers, libraries, frameworks.

### ⚠️ Limitations

- Manual Memory Management → prone to memory leaks and segmentation faults.

- No Built-in Object-Oriented Support → OOP must be simulated.

- Limited Standard Library → compared to Python or Java, requires external libraries for many tasks.

- Error Handling → no native exception handling, relies on return codes and errno.

- Steep Learning Curve → especially pointers, memory, and low-level operations.

---
---

## Best Practices

### 🏷️ Naming Conventions

- Use descriptive names for variables, functions, and structs.

- Use snake_case or lowerCamelCase consistently:

- Avoid single-letter names except in small loops (i, j, k).

### 🗂️ Code Organization

- Split code into header files (`.h`) and source files (`.c`).

- Use modules for reusable functions.

- Keep `main()` simple, delegate logic to functions.

### ✍️ Recommended Coding Style

- Indentation: 4 spaces per level (no tabs).

- Braces: place `{` on the same line or next line consistently.

- Commenting: explain why, not what (the code shows what).

- Avoid magic numbers: use constants or #define.

---
---

## Learning Resources

### 📚 Books

- “The C Programming Language” – Brian W. Kernighan & Dennis M. Ritchie (K&R) → classic reference, foundational.

- “C Primer Plus” – Stephen Prata → beginner-friendly, detailed explanations.

- “Expert C Programming: Deep C Secrets” – Peter van der Linden → advanced topics and tricks.

### 🌐 Online Tutorials and Courses

- TutorialsPoint – C Programming → beginner-friendly guide with examples.

- GeeksforGeeks – C Programming Language → structured tutorials and exercises.

- Coursera / edX / Udemy → full courses on C programming, from beginner to advanced.

### 💬 Communities and Forums

- Stack Overflow → questions and answers for specific C problems.

- Reddit – r/C_Programming → discussions, tips, resources.

- GitHub repositories → open-source C projects to study and contribute.

### 🎯 Practice Platforms

- HackerRank – C Challenges → practice small to advanced problems.

- LeetCode – C Programming → data structures and algorithms practice.

- Codewars / Exercism → interactive challenges in C.

---
---

## Summary

### 📝 Key Points About C

- Procedural and mid-level language combining low-level efficiency with high-level structure.

- Compiled language → high performance and direct execution by CPU.

- Manual memory management, pointers, and direct hardware access.

- Wide use in operating systems, embedded systems, system utilities, and performance-critical software.

- Foundation for many modern languages (C++, C#, Java).

### ⚡ When to Use C

- When performance and control over hardware are critical.

- Developing operating systems, drivers, or embedded systems.

- Building portable, efficient libraries.

- Learning fundamental programming concepts and memory management that apply to other languages.

---
---