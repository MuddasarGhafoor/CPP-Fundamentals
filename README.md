# C++ Fundamentals

> Topic-organized C++ examples for learning core syntax, classes, inheritance, templates, and standard containers.

![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=flat-square&logo=cplusplus)
![Programs](https://img.shields.io/badge/Standalone_Programs-63-2ea44f?style=flat-square)
![Level](https://img.shields.io/badge/Level-Beginner_to_Intermediate-orange?style=flat-square)

This repository records my progress while learning C++. It starts with small examples of syntax and console input/output, develops functions and object-oriented concepts, and continues into inheritance, polymorphism, file streams, templates, and standard containers.

## Repository Structure

```text
CPP-Fundamentals/
├── 01_basics/
├── 02_conditions_and_loops/
├── 03_data_types_arrays_and_pointers/
├── 04_functions/
├── 05_classes_and_objects/
├── 06_inheritance_and_polymorphism/
├── 07_file_handling/
├── 08_templates/
├── 09_stl/
├── .gitattributes
├── .gitignore
├── LICENSE
└── README.md
```

## Learning Roadmap

| Topic | Main Concepts | Programs |
|---|---|---:|
| [Basics](01_basics/) | Console input/output, comments, variables, operators, references, casts, constants, and formatting | 9 |
| [Conditions and Loops](02_conditions_and_loops/) | Conditional branches, switch, loops, multiplication tables, break, and continue | 5 |
| [Data Types, Arrays, and Pointers](03_data_types_arrays_and_pointers/) | Addresses, dereferencing, arrays, structures, unions, and enumerations | 5 |
| [Functions](04_functions/) | Parameters, return values, swapping, default arguments, recursion, Fibonacci, and overloading | 6 |
| [Classes and Objects](05_classes_and_objects/) | Access control, member functions, arrays of objects, static members, friends, constructors, copying, and destructors | 16 |
| [Inheritance and Polymorphism](06_inheritance_and_polymorphism/) | Single, multilevel, multiple, and virtual inheritance; constructor order, object access, this, and virtual functions | 12 |
| [File Handling](07_file_handling/) | Text input/output with stream constructors and open/close operations | 2 |
| [Templates](08_templates/) | Class templates, multiple and default type parameters, function templates, and dot products | 4 |
| [Standard Template Library](09_stl/) | Vectors, lists, maps, sorting, and function objects | 4 |
| **Total** | **9 topic folders** | **63** |

## Program Index

### 01 - Basics

| File | Purpose |
|---|---|
| [01_01_first_programm.cpp](01_basics/01_01_first_programm.cpp) | Demonstrates the structure of a first C++ program and console output. |
| [01_02_comments.cpp](01_basics/01_02_comments.cpp) | Demonstrates single-line and multi-line comments in C++. |
| [01_03_variables.cpp](01_basics/01_03_variables.cpp) | Demonstrates fundamental variable types and printing their values. |
| [01_04_input.cpp](01_basics/01_04_input.cpp) | Reads two integers from standard input and prints their sum. |
| [01_05_operators.cpp](01_basics/01_05_operators.cpp) | Demonstrates arithmetic, comparison, assignment, and logical operators. |
| [01_06_reference_variables.cpp](01_basics/01_06_reference_variables.cpp) | Demonstrates how a reference variable aliases an existing variable. |
| [01_07_typecasting.cpp](01_basics/01_07_typecasting.cpp) | Demonstrates explicit conversion from a floating-point value to an integer. |
| [01_08_constants.cpp](01_basics/01_08_constants.cpp) | Demonstrates mutable variables and values protected with const. |
| [01_09_manipulators.cpp](01_basics/01_09_manipulators.cpp) | Demonstrates output manipulators such as endl and setw. |

### 02 - Conditions and Loops

| File | Purpose |
|---|---|
| [02_01_if_else_condition.cpp](02_conditions_and_loops/02_01_if_else_condition.cpp) | Uses an if-else chain to decide party eligibility from a person's age. |
| [02_02_switch_condition.cpp](02_conditions_and_loops/02_02_switch_condition.cpp) | Demonstrates selection among exact age cases with a switch statement. |
| [02_03_loops.cpp](02_conditions_and_loops/02_03_loops.cpp) | Demonstrates for, while, and do-while loops. |
| [02_04_tables.cpp](02_conditions_and_loops/02_04_tables.cpp) | Reads an integer and prints its multiplication table. |
| [02_05_break_continue.cpp](02_conditions_and_loops/02_05_break_continue.cpp) | Demonstrates how break and continue alter loop execution. |

### 03 - Data Types, Arrays, and Pointers

| File | Purpose |
|---|---|
| [03_01_pointers.cpp](03_data_types_arrays_and_pointers/03_01_pointers.cpp) | Demonstrates pointers, address-of, dereferencing, and pointer-to-pointer syntax. |
| [03_02_arrays.cpp](03_data_types_arrays_and_pointers/03_02_arrays.cpp) | Demonstrates array initialization, indexed access, and array traversal. |
| [03_03_structures.cpp](03_data_types_arrays_and_pointers/03_03_structures.cpp) | Defines a structure and accesses the fields of a structure object. |
| [03_04_unions.cpp](03_data_types_arrays_and_pointers/03_04_unions.cpp) | Demonstrates shared storage among the members of a union. |
| [03_05_enum.cpp](03_data_types_arrays_and_pointers/03_05_enum.cpp) | Demonstrates enumerated constants and their underlying integer values. |

### 04 - Functions

| File | Purpose |
|---|---|
| [04_01_functions.cpp](04_functions/04_01_functions.cpp) | Defines and calls a function that returns the sum of two integers. |
| [04_02_function_calls.cpp](04_functions/04_02_function_calls.cpp) | Compares pass-by-value with pointer and reference based swapping. |
| [04_03_default_arguments.cpp](04_functions/04_03_default_arguments.cpp) | Demonstrates a function parameter with a default argument. |
| [04_04_recursions.cpp](04_functions/04_04_recursions.cpp) | Calculates a non-negative integer's factorial using recursion. |
| [04_05_fibonacci_sequence.cpp](04_functions/04_05_fibonacci_sequence.cpp) | Calculates a Fibonacci number iteratively using the conventional 0, 1 sequence. |
| [04_06_function_overloading.cpp](04_functions/04_06_function_overloading.cpp) | Demonstrates function overloading by calculating cube and cuboid volumes. |

### 05 - Classes and Objects

| File | Purpose |
|---|---|
| [05_01_classes.cpp](05_classes_and_objects/05_01_classes.cpp) | Demonstrates private and public class members with member functions. |
| [05_02_nesting.cpp](05_classes_and_objects/05_02_nesting.cpp) | Validates a binary string and produces its one's complement. |
| [05_03_arrays_in_classes.cpp](05_classes_and_objects/05_03_arrays_in_classes.cpp) | Stores and displays shop items while protecting fixed-array boundaries. |
| [05_04_static_members.cpp](05_classes_and_objects/05_04_static_members.cpp) | Demonstrates a static data member shared by every class object. |
| [05_05_arrays_of_objects.cpp](05_classes_and_objects/05_05_arrays_of_objects.cpp) | Demonstrates creating and using an array of class objects. |
| [05_06_object_functions.cpp](05_classes_and_objects/05_06_object_functions.cpp) | Adds two complex-number objects through a class member function. |
| [05_07_friend_functions.cpp](05_classes_and_objects/05_07_friend_functions.cpp) | Uses a friend function to add private data from complex-number objects. |
| [05_08_friend_classes.cpp](05_classes_and_objects/05_08_friend_classes.cpp) | Grants one class friend access to another class's private members. |
| [05_09_friend_function_example.cpp](05_classes_and_objects/05_09_friend_function_example.cpp) | Uses a friend function to combine private values from two different classes. |
| [05_10_swapper_friend_function.cpp](05_classes_and_objects/05_10_swapper_friend_function.cpp) | Swaps private values belonging to two classes through a friend function. |
| [05_11_default_constructors.cpp](05_classes_and_objects/05_11_default_constructors.cpp) | Demonstrates a user-defined default constructor. |
| [05_12_parameterized_constructor.cpp](05_classes_and_objects/05_12_parameterized_constructor.cpp) | Demonstrates initialization through a parameterized constructor. |
| [05_13_constructor_overloading.cpp](05_classes_and_objects/05_13_constructor_overloading.cpp) | Demonstrates multiple constructors with different parameter lists. |
| [05_14_dynamically_initialize_objects_with_constructors.cpp](05_classes_and_objects/05_14_dynamically_initialize_objects_with_constructors.cpp) | Calculates compound bank returns through overloaded constructors. |
| [05_15_copy_constructor.cpp](05_classes_and_objects/05_15_copy_constructor.cpp) | Demonstrates construction of an object by copying another object. |
| [05_16_destructors.cpp](05_classes_and_objects/05_16_destructors.cpp) | Demonstrates constructor and destructor calls as objects enter and leave scope. |

### 06 - Inheritance and Polymorphism

| File | Purpose |
|---|---|
| [06_01_single_inheritance.cpp](06_inheritance_and_polymorphism/06_01_single_inheritance.cpp) | Demonstrates a derived class inheriting from one base class. |
| [06_02_multilevel_inheritance.cpp](06_inheritance_and_polymorphism/06_02_multilevel_inheritance.cpp) | Demonstrates inheritance across student, exam, and result class levels. |
| [06_03_multiple_inheritance.cpp](06_inheritance_and_polymorphism/06_03_multiple_inheritance.cpp) | Demonstrates a class inheriting data and behavior from two base classes. |
| [06_04_ambiguity_resolution.cpp](06_inheritance_and_polymorphism/06_04_ambiguity_resolution.cpp) | Resolves an ambiguous inherited member function with a qualified call. |
| [06_05_virtual_base_class.cpp](06_inheritance_and_polymorphism/06_05_virtual_base_class.cpp) | Uses virtual inheritance to solve the diamond-inheritance duplication problem. |
| [06_06_calculators.cpp](06_inheritance_and_polymorphism/06_06_calculators.cpp) | Combines simple and scientific calculator operations using multiple inheritance. |
| [06_07_constructors_in_derived_class.cpp](06_inheritance_and_polymorphism/06_07_constructors_in_derived_class.cpp) | Demonstrates base and derived constructor execution and initialization order. |
| [06_08_pointers_in_objects_arrays.cpp](06_inheritance_and_polymorphism/06_08_pointers_in_objects_arrays.cpp) | Stores a user-entered array of shop objects in a safely managed vector. |
| [06_09_this_pointer.cpp](06_inheritance_and_polymorphism/06_09_this_pointer.cpp) | Uses the this pointer to distinguish a member from a same-named parameter. |
| [06_10_virtual_function.cpp](06_inheritance_and_polymorphism/06_10_virtual_function.cpp) | Demonstrates runtime polymorphism through a virtual member function. |
| [06_11_virtual_function_example.cpp](06_inheritance_and_polymorphism/06_11_virtual_function_example.cpp) | Selects derived display behavior through base-class pointers and virtual dispatch. |
| [06_12_abstract_base_class_and_pure_virtual_function.cpp](06_inheritance_and_polymorphism/06_12_abstract_base_class_and_pure_virtual_function.cpp) | Defines an abstract base class with a pure virtual display operation. |

### 07 - File Handling

| File | Purpose |
|---|---|
| [07_01_reading_and_writing_files.cpp](07_file_handling/07_01_reading_and_writing_files.cpp) | Writes and reads text files using stream constructors and validates each stream. |
| [07_02_r_w_file_using_open_function.cpp](07_file_handling/07_02_r_w_file_using_open_function.cpp) | Opens, writes, reads, and closes text files through the open member function. |

### 08 - Templates

| File | Purpose |
|---|---|
| [08_01_templates.cpp](08_templates/08_01_templates.cpp) | Defines a generic vector wrapper and calculates a size-checked dot product. |
| [08_02_template_perameters.cpp](08_templates/08_02_template_perameters.cpp) | Demonstrates a class template with three independently typed parameters. |
| [08_03_template_default_perameters.cpp](08_templates/08_03_template_default_perameters.cpp) | Demonstrates default type parameters in a class template. |
| [08_04_functions_templates_perameters.cpp](08_templates/08_04_functions_templates_perameters.cpp) | Uses a function template to average values of potentially different types. |

### 09 - Standard Template Library

| File | Purpose |
|---|---|
| [09_01_vector_in_STL.cpp](09_stl/09_01_vector_in_STL.cpp) | Demonstrates safe insertion, removal, traversal, and sizing of std::vector. |
| [09_02_list_in_STL.cpp](09_stl/09_02_list_in_STL.cpp) | Demonstrates list traversal, sorting, merging, and reversing with std::list. |
| [09_03_map_in_STL.cpp](09_stl/09_03_map_in_STL.cpp) | Stores student marks in a map and traverses key-value pairs in key order. |
| [09_04_functor_or_function_object_in_STL.cpp](09_stl/09_04_functor_or_function_object_in_STL.cpp) | Defines a function object and uses it to sort integers in descending order. |

## Compile and Run

Have GCC's C++ compiler (`g++`, with C++17 support) installed and available in your terminal. Open a lesson's folder and compile one file at a time. For example, in Windows PowerShell:

```powershell
g++ 01_01_first_programm.cpp -o program.exe
.\program.exe
```

## Suggested Learning Order

1. Follow folders `01` through `04` to practise language fundamentals and functions.
2. Work through `05` and `06` to understand object lifetimes, access control, inheritance, and virtual dispatch.
3. Continue with `07` through `09` for file handling, generic programming, and standard containers.

Within each folder, follow the lesson numbering. Read the opening comment, predict the output, compile the example, and experiment with its inputs.

## Notes

- These are learning examples. Some still assume valid console input and would benefit from stronger validation and numeric edge-case handling.
- The factorial example accepts integers from 0 to 20
- The Fibonacci example uses `F(0) = 0`, `F(1) = 1` and accepts positions from 0 to 93.
- The scientific calculator interprets trigonometric arguments in radians.
- Some filenames retain the original lesson wording. In particular, the object-array example now uses `std::vector` to manage storage.
- Generated executables, build artifacts, and local editor files are excluded through `.gitignore`. Source files, snippets, and sample text data remain included.
- `.gitattributes` provides consistent text line endings when files are checked out through Git.
- The collection has been inspected statically; a complete compiler and runtime verification pass has not yet been recorded.

---

Maintained by **Muddasar Ali Ghafoor** as a personal record of learning, practising, and improving with C++.
