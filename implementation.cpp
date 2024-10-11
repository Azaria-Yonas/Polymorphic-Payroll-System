// g++ -o runME.exe BasePlusCommissionEmployee.cpp CommissionEmployee.cpp Employee.cpp HourlyWorker.cpp implementation.cpp SalariedEmployee.cpp PieceWorker.cpp

#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h" 
#include "CommissionEmployee.h"  
#include "BasePlusCommissionEmployee.h" 
#include "HourlyWorker.h"
#include "PieceWorker.h"

using namespace std;

void virtualViaPointer( const Employee * const ); 
void virtualViaReference( const Employee & ); 

int main()
{
   cout << fixed << setprecision( 2 );
   


    vector<Employee*> employees = {
        new SalariedEmployee("Adiel", "Yonas", "111-11-1111", 800),
        new CommissionEmployee("Benaiah", "Yonas", "333-33-3333", 10000, .06),
        new BasePlusCommissionEmployee("Naomi", "Yonas", "444-44-4444", 5000, .04, 300),
        new HourlyWorker(41.0, 16.0, "Azaria", "Yonas", "432-24-3434"),
        new PieceWorker(10, 75.00, "Yafet", "Samson", "432-24-3434")
    };

   for ( const Employee *employeePtr : employees ) {virtualViaPointer( employeePtr );}


//    for ( const Employee *employeePtr : employees ){virtualViaReference( *employeePtr ); }
} 

void virtualViaPointer( const Employee * const baseClassPtr ){
   baseClassPtr->print();
   cout << "\nearned $" << baseClassPtr->earnings() << "\n\n";
} 


// void virtualViaReference( const Employee &baseClassRef ){           //Can you this aswell
//  baseClassRef.print();
//    cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
// } 
