Brief description of Program :-

• **Base Pointer Without a Virtual Function :-**

This C++ program demonstrates **static binding** using a base-class pointer.

* It creates a `Base` class with a `display()` function.
* A `Derived` class defines its own `display()` function.
* A base pointer points to a derived object.
* Since the base function is not declared `virtual`, the base version is called.
* This demonstrates compile-time or static binding.

**In short:** This program shows that without a virtual function, a base pointer calls the base-class implementation even when it points to a derived object.
