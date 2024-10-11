#include <iostream>
#include "Employee.h" 

using namespace std;




class HourlyWorker: public Employee{
private:
    double HoursWorked;
    double HourlyRate;
public:
    HourlyWorker(double , double, const std::string &, const std::string &, const std::string &);

    void setHoursWorked(double );
    double getHoursWorked(); 

    void setHourlyRate(double );
    double getHourlyRate();

    virtual double earnings() const override;
    void print() const;

    ~HourlyWorker();



};