#include <iostream>
#include "Employee.h" 

using namespace std;


class PieceWorker: public Employee{
    int PiecesSold;
    double Price;
public:


    PieceWorker(int , double, const std::string &, const std::string &, const std::string &);

    void setPiecesSold(double );
    double getPiecesSold(); 

    void setPrice(double );
    double getPrice();

    virtual double earnings() const override;
    void print() const;


    ~PieceWorker();

};