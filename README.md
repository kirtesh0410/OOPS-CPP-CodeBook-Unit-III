Brief description of Program :-

• **Collection of Polymorphic Shape Pointers :-**

This C++ program demonstrates polymorphic processing using a collection of shape pointers.

* It creates an abstract `Shape` base class.
* `Rectangle` and `Circle` classes implement the required virtual functions.
* `std::unique_ptr<Shape>` is used to store different derived objects.
* A vector stores multiple shape objects through the common base interface.
* A loop calls the correct `displayName()` and `area()` functions for each object.
* The virtual destructor ensures safe cleanup.

**In short:** This program demonstrates how different derived objects can be stored and processed together through a common polymorphic base interface.
