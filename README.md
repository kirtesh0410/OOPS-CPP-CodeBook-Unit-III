# OOPS-CPP-CodeBook-Unit-III
Object Oriented Programming with C++ - Unit III CodeBook

Student Name :- Kirtesh Bharambe

ZPRN :- 125UET1089

Class/Division :- SY AIDS C

Unit :- III

List of Programs :-

            1) Function Overloading
            2) Area Calculator Using Function Overloading
            3) Unary Minus Operator Overloading
            4) Prefix and Postfix Increment Operator Overloading
            5) Binary + Operator Overloading for Complex Numbers
            6) Relational Operator Overloading
            7) Friend/Non-Member Operator Overloading
            8) Base Pointer Without a Virtual Function
            9) Base Pointer With a Virtual Function
            10) Base Reference With a Virtual Function
            11) Abstract Class and Pure Virtual Function
            12) Collection of Polymorphic Shape Pointers
            13) Virtual Destructor
            14) Object Slicing Demonstration
            15) Payment Processing System
            16) Employee Payroll Mini-Project

Brief descriptions of each Program :-

• **1) Function Overloading :-**

This C++ program demonstrates **compile-time polymorphism** using function overloading.

* It defines multiple `add()` functions with the same name.
* The functions accept different numbers or types of parameters.
* The compiler selects the appropriate function based on the arguments passed.
* It demonstrates addition of two integers, two double values, and three integers.
* It shows that the return type alone cannot be used to overload a function.

**In short:** This program demonstrates how multiple functions with the same name can perform different operations based on their parameter lists. 

• **2) Area Calculator Using Function Overloading :-**

This C++ program calculates the areas of different shapes using overloaded functions.

* One `calculateArea()` function calculates the area of a square.
* Another overloaded function calculates the area of a rectangle.
* A third overloaded function calculates the area of a circle.
* Different parameter lists allow the compiler to select the correct function.
* It demonstrates compile-time polymorphism through function overloading.

**In short:** This program shows how function overloading can be used to calculate different shapes using the same function name. 

• **3) Unary Minus Operator Overloading :-**

This C++ program demonstrates unary operator overloading using the minus (`-`) operator.

* It creates a `Number` class containing an integer value.
* The unary minus operator is overloaded using `operator-()`.
* Applying `-` to an object creates a new object containing the negative value.
* It displays both the original and negated values.
* It demonstrates how operators can be given special meaning for user-defined classes.

**In short:** This program demonstrates how the unary minus operator can be overloaded for objects. 

• **4) Prefix and Postfix Increment Operator Overloading :-**

This C++ program demonstrates overloading of both prefix and postfix increment operators.

* The `Counter` class stores an integer value.
* The prefix `++object` increments the value first and returns the updated object.
* The postfix `object++` returns the old value and then increments the object.
* A dummy `int` parameter is used to distinguish the postfix operator.
* The program displays the results of both prefix and postfix operations.

**In short:** This program explains the difference between prefix and postfix increment operations through operator overloading. 

• **5) Binary + Operator Overloading for Complex Numbers :-**

This C++ program demonstrates binary `+` operator overloading for complex numbers.

* It creates a `Complex` class with real and imaginary parts.
* The `operator+()` function is overloaded to add two complex objects.
* Two complex numbers are added using the normal `+` operator.
* A new `Complex` object is returned containing the result.
* The program displays both input complex numbers and their sum.

**In short:** This program demonstrates how the binary `+` operator can be overloaded to perform addition of complex number objects. 

• **6) Relational Operator Overloading :-**

This C++ program demonstrates relational operator overloading using the `>` operator.

* It creates a `Distance` class containing a distance in meters.
* The `operator>()` function is overloaded.
* Two `Distance` objects are compared using the `>` operator.
* The program displays both distances.
* It prints which distance is greater based on the comparison.

**In short:** This program shows how relational operators can be overloaded to compare user-defined objects. 

• **7) Friend/Non-Member Operator Overloading :-**

This C++ program demonstrates operator overloading using a friend non-member function.

* It creates a `Complex` class with private real and imaginary values.
* A friend `operator+()` function is declared inside the class.
* The overloaded operator allows an integer to be added to a complex number.
* The non-member function can access the private members of the `Complex` class because it is declared as a friend.
* The expression `10 + complexNumber` is demonstrated.

**In short:** This program shows how a friend non-member function can be used for operator overloading when the left operand is not an object of the class. 

• **8) Base Pointer Without a Virtual Function :-**

This C++ program demonstrates **static binding** using a base-class pointer.

* It creates a `Base` class with a `display()` function.
* A `Derived` class defines its own `display()` function.
* A base pointer points to a derived object.
* Since the base function is not declared `virtual`, the base version is called.
* This demonstrates compile-time or static binding.

**In short:** This program shows that without a virtual function, a base pointer calls the base-class implementation even when it points to a derived object. 

• **9) Base Pointer With a Virtual Function :-**

This C++ program demonstrates **run-time polymorphism** using a virtual function and a base pointer.

* It creates an `Animal` base class with a virtual `sound()` function.
* `Dog` and `Cat` classes override the `sound()` function.
* An `Animal*` pointer is used to point to different derived objects.
* The correct derived implementation is selected during program execution.
* A virtual destructor is also used in the base class.

**In short:** This program demonstrates how virtual functions allow a base pointer to call the appropriate derived-class function at run time. 

• **10) Base Reference With a Virtual Function :-**

This C++ program demonstrates run-time polymorphism using a base-class reference.

* It creates an abstract-like `Shape` interface with a virtual `area()` function.
* `Rectangle` and `Circle` override the `area()` function.
* A function accepts a `const Shape&` reference.
* Different derived objects are passed to the same function.
* Virtual dispatch calls the correct derived implementation.
* Passing by reference preserves the actual derived object.

**In short:** This program demonstrates dynamic binding through a base-class reference without copying or slicing the derived object. 

• **11) Abstract Class and Pure Virtual Function :-**

This C++ program demonstrates the concept of an abstract class using a pure virtual function.

* The `Shape` class contains a pure virtual `area()` function.
* A class containing at least one pure virtual function becomes abstract.
* An abstract class cannot be instantiated directly.
* The `Rectangle` class inherits from `Shape`.
* `Rectangle` provides its own implementation of the `area()` function.
* The program calculates and displays the rectangle's area.

**In short:** This program demonstrates how pure virtual functions are used to create abstract base classes and define a common interface. 

• **12) Collection of Polymorphic Shape Pointers :-**

This C++ program demonstrates polymorphic processing using a collection of shape pointers.

* It creates an abstract `Shape` base class.
* `Rectangle` and `Circle` classes implement the required virtual functions.
* `std::unique_ptr<Shape>` is used to store different derived objects.
* A vector stores multiple shape objects through the common base interface.
* A loop calls the correct `displayName()` and `area()` functions for each object.
* The virtual destructor ensures safe cleanup.

**In short:** This program demonstrates how different derived objects can be stored and processed together through a common polymorphic base interface. 

• **13) Virtual Destructor :-**

This C++ program demonstrates the importance of a virtual destructor in polymorphic classes.

* It creates a `Base` class with a virtual destructor.
* The `Derived` class defines its own destructor.
* A base pointer points to a dynamically created derived object.
* The object is deleted through the base pointer.
* Because the destructor is virtual, the derived destructor executes first.
* The base destructor executes afterward.

**In short:** This program demonstrates how a virtual destructor ensures proper destruction of derived objects through base-class pointers. 

• **14) Object Slicing Demonstration :-**

This C++ program demonstrates object slicing and how references prevent it.

* It creates a `Base` class and a `Derived` class.
* Both classes contain a virtual `display()` function.
* Passing a derived object by value to a base parameter causes object slicing.
* Only the base portion of the derived object is copied.
* Passing the same object by reference preserves the complete derived object.
* The program compares pass-by-value and pass-by-reference behavior.

**In short:** This program demonstrates why references or pointers should be used when polymorphic behavior of derived objects needs to be preserved. 

• **15) Payment Processing System :-**

This C++ program demonstrates a real-world application of run-time polymorphism using a payment system.

* It creates an abstract `Payment` base class.
* The `pay()` function is declared as a pure virtual function.
* `CardPayment`, `UpiPayment`, and `NetBankingPayment` provide their own implementations.
* A common `processPayment()` function accepts a base-class reference.
* Different payment objects can be processed through the same interface.
* A virtual destructor is included in the base class.

**In short:** This program demonstrates how abstract classes and run-time polymorphism can be applied to a practical payment processing system. 

• **16) Employee Payroll Mini-Project :-**

This C++ program demonstrates an employee salary-calculation system using abstract classes and run-time polymorphism.

* It creates an abstract `Employee` base class.
* The `calculateSalary()` function is declared as pure virtual.
* `PermanentEmployee` calculates salary using basic salary and allowance.
* `ContractEmployee` calculates salary using hourly rate and hours worked.
* A common `printPaySlip()` function works with the base-class reference.
* The program demonstrates polymorphic salary calculation for different employee types.
* A virtual destructor is used for safe polymorphic behavior.

**In short:** This program combines abstract classes, pure virtual functions, inheritance, and run-time polymorphism into a practical employee payroll application. 
