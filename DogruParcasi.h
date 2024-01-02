#pragma once
#ifndef DOGRUPARCASI_H
#define DOGRUPARCASI_H
using namespace std;
#include "Nokta.h"

class DogruParcasi {
private:
    //doðru parçasýnýn özelliklerini temsil eder
    Nokta nokta1;
    Nokta nokta2;

public:
    DogruParcasi(const Nokta& nokta1, const Nokta& nokta2);
    DogruParcasi(const DogruParcasi& other);
    //kurucu iþlevi, bir baþka DogruParcasi nesnesinden bir DogruParcasi nesnesi oluþturmak için kullanýlýr
    DogruParcasi(const Nokta& ortaNokta, double uzunluk, double egim);
    //kurucu iþlevi, bir orta nokta, bir uzunluk ve bir eðimden bir DogruParcasi nesnesi oluþturmak için kullanýlýr

    const Nokta& getNokta1() const;
    void setNokta1(const Nokta& nokta);
    // doðru parçasýnýn birinci noktasýna eriþmek ve onu deðiþtirmek için kullanýlýr
    void setP1(const Nokta& newP1) {
        nokta1 = newP1;
    }

    const Nokta& getNokta2() const;
    void setNokta2(const Nokta& nokta);

    double uzunluk() const;
    Nokta kesisimNoktasi(const Nokta& nokta) const;
    Nokta ortaNokta() const;

    std::string toString() const;
    // doðru parçasýnýn bir dize gösterimini döndürür
    void yazdir() const;
};

#endif // DOGRUPARCASI_H
