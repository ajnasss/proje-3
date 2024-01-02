#pragma once
#ifndef UCGEN_H
#define UCGEN_H
#include "DogruParcasi.h"

class Ucgen {
private:
    Nokta nokta1;
    Nokta nokta2;
    Nokta nokta3;

public:
    Ucgen(const Nokta& nokta1, const Nokta& nokta2, const Nokta& nokta3);
    //kurucu iþlevi üçgenin üç noktasýný alýr

    const Nokta& getNokta1() const;//üçgenin birinci noktasýný döndürür
    void setNokta1(const Nokta& nokta);//üçgenin birinci noktasýný ayarlar

    const Nokta& getNokta2() const;
    void setNokta2(const Nokta& nokta);

    const Nokta& getNokta3() const;
    void setNokta3(const Nokta& nokta);

    std::string toString() const;
    double alan() const;
    double cevre() const;
    double* acilar() const;
};

#endif // UCGEN_H
