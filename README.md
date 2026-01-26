# CPP07

## Overview
This project demonstrates advanced C++ template programming through three exercises:

- **ex00**: Implementation of generic `swap`, `min`, and `max` template functions.
- **ex01**: Implementation of a generic `iter` function to apply a function to each element of an array.
- **ex02**: Implementation of a template `Array` class mimicking a simplified version of `std::vector`.

## Project Structure

```
CPP07/
├── ex00/
│   ├── main.cpp
│   ├── Makefile
│   └── whatever.hpp
├── ex01/
│   ├── main.cpp
│   ├── Makefile
│   └── iter.hpp
├── ex02/
│   ├── main.cpp
│   ├── Makefile
│   ├── Array.hpp
│   └── Array.tpp
└── README.md
```

## Build & Run

Each exercise is self-contained. To build and run an exercise:

```sh
cd ex00  # or ex01, ex02
make
./whatever  # or ./iter, ./array
```

To clean build files:

```sh
make fclean
```

## What I Learned: C++ Templates

### What is a Template?
A template in C++ is a powerful feature that allows you to write generic and reusable code. Templates enable functions and classes to operate with different data types without rewriting code for each type. This leads to more flexible and maintainable programs.

### Function Templates
Function templates allow you to create a single function definition that works with any data type. The compiler generates the appropriate function code based on the type used when the function is called. For example, in this project, the `swap`, `min`, and `max` functions are implemented as templates, so they can work with `int`, `float`, `std::string`, or any other type that supports the required operations.

**Example:**
```cpp
template <typename T>
void swap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}
```

### Class Templates
Class templates allow you to define classes that can handle any data type. The compiler creates a version of the class for each type you use. In this project, the `Array` class is a template, so you can create arrays of `int`, `float`, `std::string`, etc., all using the same class definition.

**Example:**
```cpp
template <typename T>
class Array {
	// ...
};
```

### Summary
Through this project, I learned how to:
- Write and use function templates for generic operations.
- Implement and use class templates for type-safe containers.
- Apply templates to make code more reusable and maintainable.
- Understand the syntax and best practices for templates in C++.

## Author
Henna Parveen