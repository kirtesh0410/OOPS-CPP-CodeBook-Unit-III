Brief description of Program :-

• **Payment Processing System :-**

This C++ program demonstrates a real-world application of run-time polymorphism using a payment system.

* It creates an abstract `Payment` base class.
* The `pay()` function is declared as a pure virtual function.
* `CardPayment`, `UpiPayment`, and `NetBankingPayment` provide their own implementations.
* A common `processPayment()` function accepts a base-class reference.
* Different payment objects can be processed through the same interface.
* A virtual destructor is included in the base class.

**In short:** This program demonstrates how abstract classes and run-time polymorphism can be applied to a practical payment processing system.
