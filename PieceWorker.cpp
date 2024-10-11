#include <iostream>
#include "PieceWorker.h"

using namespace std;

PieceWorker::PieceWorker(int a, double b, const std::string &c, const std::string &d, 
const std::string &e ): Employee(c, d, e){
    PiecesSold = a;
    Price = b; 
}

void PieceWorker::setPiecesSold(double a){PiecesSold = a;}
double PieceWorker::getPiecesSold(){return PiecesSold;}

void PieceWorker::setPrice(double a){Price = a;}
double PieceWorker::getPrice(){ return Price;}

double PieceWorker::earnings() const{return Price * PiecesSold;}

void PieceWorker::print() const {
    cout << "piece worker: ";   
    Employee::print(); 
    cout << "\npieces sold: " << PiecesSold;
    cout << ";  price: " << Price;
}

PieceWorker::~PieceWorker(){};