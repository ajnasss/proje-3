#pragma once
#ifndef DOGRUPARCASI_H
#define DOGRUPARCASI_H
using namespace std;
#include "Nokta.h"

class DogruParcasi {
private:
    //do�ru par�as�n�n �zelliklerini temsil eder
    Nokta nokta1;
    Nokta nokta2;

public:
    DogruParcasi(const Nokta& nokta1, const Nokta& nokta2);
    DogruParcasi(const DogruParcasi& other);
    //kurucu i�levi, bir ba�ka DogruParcasi nesnesinden bir DogruParcasi nesnesi olu�turmak i�in kullan�l�r
    DogruParcasi(const Nokta& ortaNokta, double uzunluk, double egim);
    //kurucu i�levi, bir orta nokta, bir uzunluk ve bir e�imden bir DogruParcasi nesnesi olu�turmak i�in kullan�l�r

    const Nokta& getNokta1() const;
    void setNokta1(const Nokta& nokta);
    // do�ru par�as�n�n birinci noktas�na eri�mek ve onu de�i�tirmek i�in kullan�l�r
    void setP1(const Nokta& newP1) {
        nokta1 = newP1;
    }

    const Nokta& getNokta2() const;
    void setNokta2(const Nokta& nokta);

    double uzunluk() const;
    Nokta kesisimNoktasi(const Nokta& nokta) const;
    Nokta ortaNokta() const;

    std::string toString() const;
    // do�ru par�as�n�n bir dize g�sterimini d�nd�r�r
    void yazdir() const;
};

#endif // DOGRUPARCASI_H
