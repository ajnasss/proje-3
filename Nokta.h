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
    Nokta();  // Parametresiz yap�c�
    Nokta(double value);  // Tek parametreli yap�c�
    Nokta(double x, double y);  // �ki parametreli yap�c�
    Nokta(const Nokta& other);  // Ba�ka bir noktan�n kopyas�n� alan yap�c�
    Nokta(const Nokta& other, double ofset_x, double ofset_y);  // Ba�ka bir nokta ve ofset de�erleri alan yap�c�

    double getX() const;
    void setX(double value);

    double getY() const;
    void setY(double value);

    void set(double new_x, double new_y);

    std::string toString() const;
    void yazdir() const;
};

#endif // NOKTA_H
