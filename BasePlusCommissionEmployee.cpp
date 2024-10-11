
#include <iostream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee( 
   const string &first, const string &last, const string &ssn, 
   double sales, double rate, double salary )
   : CommissionEmployee( first, last, ssn, sales, rate )  
{
   setBaseSalary( salary ); 
} 

void BasePlusCommissionEmployee::setBaseSalary( double salary ){ 
   if ( salary >= 0.0 ) {baseSalary = salary; }                                   
   else throw invalid_argument( "Salary must be >= 0.0" );       
} 


double BasePlusCommissionEmployee::getBaseSalary() const{ return baseSalary; } 

double BasePlusCommissionEmployee::earnings() const{ return getBaseSalary() + CommissionEmployee::earnings(); } 


void BasePlusCommissionEmployee::print() const{
   cout << "base-salaried ";
   CommissionEmployee::print(); // code reuse
   cout << "; base salary: " << getBaseSalary();
} 
