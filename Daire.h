#pragma once
#ifndef DAIRE_H
#define DAIRE_H

#include "Nokta.h"

class Daire {
private:
    Nokta merkez;
    double yaricap;

public:
    Daire(const Nokta& merkez, double yaricap);//kurucu iþlevi, dairenin merkezini ve yarýçapýný alýr
    Daire(const Daire& other);
    Daire(const Daire& other, double carpan);//kurucu iþlevleri, bir baþka Daire nesnesinden veya bir double deðerinden bir Daire nesnesi oluþturmak için kullanýlýr

    double alan() const;
    double cevre() const;
    int kesisim(const Daire& daire) const;

    std::string toString() const;//dairenin bir dize gösterimini döndürür
    void yazdir() const;

    // Ýlgili get ve set metotlarý
    const Nokta& getMerkez() const;
    void setMerkez(const Nokta& nokta);

    double getYaricap() const;//dairenin yarýçapýna eriþmek ve onu deðiþtirmek için kullanýlýr
    void setYaricap(double value);
};

#endif // DAIRE_H
