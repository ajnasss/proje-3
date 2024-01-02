#pragma once
#include <GLFW/glfw3.h>
#include "DogruParcasi.h"
using namespace std;
//DogruParcasi nesnesi oluþturur. Doðru parçasýnýn iki noktasýný alýr.
DogruParcasi::DogruParcasi(const Nokta& nokta1, const Nokta& nokta2) : nokta1(nokta1), nokta2(nokta2) {}

DogruParcasi::DogruParcasi(const DogruParcasi& other) : nokta1(other.nokta1), nokta2(other.nokta2) {}
//bir baþka DogruParcasi nesnesinden bir DogruParcasi nesnesi oluþturmak için kullanýlýr.

DogruParcasi::DogruParcasi(const Nokta& ortaNokta, double uzunluk, double egim) {
    //  bir orta nokta, bir uzunluk ve bir eðimden bir DogruParcasi nesnesi oluþturmak için kullanýlýr implementasyon olur
}

const Nokta& DogruParcasi::getNokta1() const {
    return nokta1;
}
//doðru parçasýnýn birinci noktasýna eriþmek ve onu deðiþtirmek için kullanýlýr.
void DogruParcasi::setNokta1(const Nokta& nokta) {
    nokta1 = nokta;
}

const Nokta& DogruParcasi::getNokta2() const {
    return nokta2;
}

void DogruParcasi::setNokta2(const Nokta& nokta) {
    nokta2 = nokta;
}

double DogruParcasi::uzunluk() const {
    // implementasyon burada
    return 0.0;
}

Nokta DogruParcasi::kesisimNoktasi(const Nokta& nokta) const {
    // implementasyon burada
    return Nokta();
}

Nokta DogruParcasi::ortaNokta() const {
    // implemente edilmemiþ iþlevler
    return Nokta();
}

std::string DogruParcasi::toString() const {
    //doðru parçasýnýn bir dize gösterimini döndürür
    return nokta1.toString() + " - " + nokta2.toString();
}

void DogruParcasi::yazdir() const {
    std::cout << toString() << std::endl;
}
