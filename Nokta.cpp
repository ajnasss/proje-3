#pragma once
#include <GLFW/glfw3.h>
#ifndef NOKTA_H
#define NOKTA_H
//bu ba�l�k dosyas�n�n birden �ok kez eklenmesini �nlemek i�in bir koruma sa�lar

#include <string>

class Nokta {
private:
    double x;
    double y;

public:
    Nokta();
    //Varsay�lan kurucu, x ve y'yi 0'a ayarlar
    Nokta(double xy);
    // x ve y'yi ayn� de�ere ayarlar
    Nokta(double x, double y);
    // x ve y'yi belirtilen de�erlere ayarlar
    Nokta(const Nokta& other);
    //ba�ka bir Nokta nesnesinden bir Nokta nesnesi olu�turur
    Nokta(const Nokta& other, double ofset_x, double ofset_y);
    //ba�ka bir Nokta nesnesinden bir Nokta nesnesi olu�turur ve x ve y'ye ofset ekler

    double getX() const;// x de�erini d�nd�r�r
    void setX(double x);// x de�erini ayarlar

    double getY() const;
    void setY(double y);

    void set(double x, double y);//x ve y de�erlerini ayarlar

    std::string toString() const;//noktay� bir dize g�sterimi olarak d�nd�r�r
    void yazdir() const;
};

#endif // NOKTA_H
