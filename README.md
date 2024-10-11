# Polymorphic Payroll System

## Overview

A polymorphic payroll system demostrating how concepts like inheritance and polymorphism take shape in C++.


### Note

Before proceeding, make sure you are familiar with classes, structures, pointers (including dynamic allocation),  constructors and deconstructors, encapsulation, inheritance, virtual function, etc.

## Features

### New Employee Subclasses
1. **Piece Worker**
   - Payed based on the number of pieces of merchandise produced.

2. **Hourly Worker**
   - Payed based on an hourly wage and the number of hours worked.
   - Has overtime pay.

3. **Commision Worker**
   - Payed based on a percentage of the total sale.

4. **Salary Worker**
   - Payed based on time intervals.

4. **Base Plus Commision Worker**
   - Has a base salary and a percentage of the total sale.

## Getting Started

 - To run the code you can copy and paste this:

            g++ -o implementation.exe BasePlusCommissionEmployee.cpp CommissionEmployee.cpp Employee.cpp HourlyWorker.cpp myTest.cpp SalariedEmployee.cpp PieceWorker.cpp</u>

   into the terminal 

### Note
   - Make sure all the files are in the same folder.

### Prerequisites

- C++ 13.1.0
- An IDE + Complier (e.g., g++)
