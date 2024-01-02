#pragma once
#include <GLFW/glfw3.h>
#ifndef NOKTA_H
#define NOKTA_H
//bu baþlýk dosyasýnýn birden çok kez eklenmesini önlemek için bir koruma saðlar

#include <string>

class Nokta {
private:
    double x;
    double y;

public:
    Nokta();
    //Varsayýlan kurucu, x ve y'yi 0'a ayarlar
    Nokta(double xy);
    // x ve y'yi ayný deðere ayarlar
    Nokta(double x, double y);
    // x ve y'yi belirtilen deðerlere ayarlar
    Nokta(const Nokta& other);
    //baþka bir Nokta nesnesinden bir Nokta nesnesi oluþturur
    Nokta(const Nokta& other, double ofset_x, double ofset_y);
    //baþka bir Nokta nesnesinden bir Nokta nesnesi oluþturur ve x ve y'ye ofset ekler

    double getX() const;// x deðerini döndürür
    void setX(double x);// x deðerini ayarlar

    double getY() const;
    void setY(double y);

    void set(double x, double y);//x ve y deðerlerini ayarlar

    std::string toString() const;//noktayý bir dize gösterimi olarak döndürür
    void yazdir() const;
};

#endif // NOKTA_H
