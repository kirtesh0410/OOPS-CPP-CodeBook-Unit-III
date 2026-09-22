Brief description of Program :-

• **Virtual Destructor :-**

This C++ program demonstrates the importance of a virtual destructor in polymorphic classes.

* It creates a `Base` class with a virtual destructor.
* The `Derived` class defines its own destructor.
* A base pointer points to a dynamically created derived object.
* The object is deleted through the base pointer.
* Because the destructor is virtual, the derived destructor executes first.
* The base destructor executes afterward.

**In short:** This program demonstrates how a virtual destructor ensures proper destruction of derived objects through base-class pointers.
