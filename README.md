Brief description of Program :-

• **Object Slicing Demonstration :-**

This C++ program demonstrates object slicing and how references prevent it.

* It creates a `Base` class and a `Derived` class.
* Both classes contain a virtual `display()` function.
* Passing a derived object by value to a base parameter causes object slicing.
* Only the base portion of the derived object is copied.
* Passing the same object by reference preserves the complete derived object.
* The program compares pass-by-value and pass-by-reference behavior.

**In short:** This program demonstrates why references or pointers should be used when polymorphic behavior of derived objects needs to be preserved.
