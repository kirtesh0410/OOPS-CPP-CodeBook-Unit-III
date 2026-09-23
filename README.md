Brief description of Program :-

• **Friend/Non-Member Operator Overloading :-**

This C++ program demonstrates operator overloading using a friend non-member function.

* It creates a `Complex` class with private real and imaginary values.
* A friend `operator+()` function is declared inside the class.
* The overloaded operator allows an integer to be added to a complex number.
* The non-member function can access the private members of the `Complex` class because it is declared as a friend.
* The expression `10 + complexNumber` is demonstrated.

**In short:** This program shows how a friend non-member function can be used for operator overloading when the left operand is not an object of the class.
