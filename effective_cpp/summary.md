# EFFECTIVE C++, 3RD EDITION, SCOTT MEYERS

This book assume that you already have a background in software programming. 
This book mainly presents 55 specific ways on how to use C++ effectively to improve your programs and designs.
For instance, it specialize on how to choose between inheritance and templates? Between public and private inheritance? Between private inheritance and composition? Between member and non-member functions? Between pass-by-value and pass-by-reference? It’s important to make these decisions correctly at the beginning stage of software design, because a poor choice may make programs become difficult, time-consuming, and expensive later.

### Chapter 1: Accustoming Yourself to C++

1. Item1: View C++ as a combination of languages
    * C++ is a combination of other languages such as [C](https://en.wikipedia.org/wiki/C_(programming_language)), [Object-oriented C++](https://www.tutorialspoint.com/cplusplus/cpp_object_oriented.htm), [Template C++](https://www.tutorialspoint.com/cplusplus/cpp_templates.htm), [STL](https://www.tutorialspoint.com/cplusplus/cpp_stl_tutorial.htm).
2. Item2: Prefer consts, enums, inlines to #define
    * For simple constants, prefer const or enums to #defines: 
    * For function-like macros, prefer inline functions to #defines
3. Item3: Use const whenever possible
4. Item4: Make sure that any object should be initialized before using

### Chapter 2: Constructors, Destructors, and Assignment Operators

5. Item5: class automatically generates default constructor, copy-constructor 
function, assignment operator, deconstructor.
6. Item6: prevent the automaticaly generated functions as copy-constructor or 
assignment operator.
7. Item7: must declare the deconstructor function in the base class virtual.
This helps to release all resources in the derived class when deleting pointer.






