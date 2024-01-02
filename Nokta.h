#pragma once
#ifndef NOKTA_H
#define NOKTA_H
using namespace std;
#include <iostream>

class Nokta {
private:
    double x;
    double y;

public:
    Nokta();  // Parametresiz yapýcý
    Nokta(double value);  // Tek parametreli yapýcý
    Nokta(double x, double y);  // Ýki parametreli yapýcý
    Nokta(const Nokta& other);  // Baþka bir noktanýn kopyasýný alan yapýcý
    Nokta(const Nokta& other, double ofset_x, double ofset_y);  // Baþka bir nokta ve ofset deðerleri alan yapýcý

    double getX() const;
    void setX(double value);

    double getY() const;
    void setY(double value);

    void set(double new_x, double new_y);

    std::string toString() const;
    void yazdir() const;
};

#endif // NOKTA_H
