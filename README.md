Brief descriptions of each Program :-

• **Base Reference With a Virtual Function :-**

This C++ program demonstrates run-time polymorphism using a base-class reference.

* It creates an abstract-like `Shape` interface with a virtual `area()` function.
* `Rectangle` and `Circle` override the `area()` function.
* A function accepts a `const Shape&` reference.
* Different derived objects are passed to the same function.
* Virtual dispatch calls the correct derived implementation.
* Passing by reference preserves the actual derived object.

**In short:** This program demonstrates dynamic binding through a base-class reference without copying or slicing the derived object.
