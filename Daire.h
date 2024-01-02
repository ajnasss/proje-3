#pragma once
#ifndef DAIRE_H
#define DAIRE_H

#include "Nokta.h"

class Daire {
private:
    Nokta merkez;
    double yaricap;

public:
    Daire(const Nokta& merkez, double yaricap);//kurucu i�levi, dairenin merkezini ve yar��ap�n� al�r
    Daire(const Daire& other);
    Daire(const Daire& other, double carpan);//kurucu i�levleri, bir ba�ka Daire nesnesinden veya bir double de�erinden bir Daire nesnesi olu�turmak i�in kullan�l�r

    double alan() const;
    double cevre() const;
    int kesisim(const Daire& daire) const;

    std::string toString() const;//dairenin bir dize g�sterimini d�nd�r�r
    void yazdir() const;

    // �lgili get ve set metotlar�
    const Nokta& getMerkez() const;
    void setMerkez(const Nokta& nokta);

    double getYaricap() const;//dairenin yar��ap�na eri�mek ve onu de�i�tirmek i�in kullan�l�r
    void setYaricap(double value);
};

#endif // DAIRE_H
