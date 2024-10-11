#include <iostream>
#include "HourlyWorker.h"

using namespace std;



HourlyWorker::HourlyWorker(double a, double b, const std::string &c, const std::string &d, 
const std::string &e ): Employee(c, d, e){
    HoursWorked = a;
    HourlyRate = b; 
}

void HourlyWorker::setHoursWorked(double a){HoursWorked = a;}
double HourlyWorker::getHoursWorked(){return HoursWorked;}

void HourlyWorker::setHourlyRate(double a){HourlyRate = a;}
double HourlyWorker::getHourlyRate(){return HourlyRate;}



double HourlyWorker::earnings() const{
    if (HoursWorked <= 40){return HoursWorked * HourlyRate;}
    else{
        double overtime = HoursWorked - 40;
        double overtimeRate = HourlyRate * 1.5;
        double total = (overtime * overtimeRate) + (40*HourlyRate);
        return total;
    }
}

void HourlyWorker::print() const{
    cout << "hourly employee: ";   
    Employee::print(); 
    cout << "\nhours horked: " << HoursWorked;
    cout << ";  hourly rate: " << HourlyRate;
    if (HoursWorked > 40) {
        cout << "\novertime hours worked: " << HoursWorked - 40;
        cout << ";  overtime rate: x" << 1.5;
        cout << ";  overtime pay: $" << (HoursWorked - 40) *(HourlyRate*1.5);
    }
};

HourlyWorker::~HourlyWorker(){};