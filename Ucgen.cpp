#pragma once
#include "Ucgen.h"
#include <GLFW/glfw3.h>
Ucgen::Ucgen(const Nokta& nokta1, const Nokta& nokta2, const Nokta& nokta3)
//Ucgen nesnesi oluþturur. Üçgenin üç noktasýný alýr ve bunlarý nokta1, nokta2 ve nokta3 adlarýnda özel deðiþkenlere atar.
    : nokta1(nokta1), nokta2(nokta2), nokta3(nokta3) {}

const Nokta& Ucgen::getNokta1() const {
    return nokta1;
    //üçgenin birinci noktasýný döndürür
}

void Ucgen::setNokta1(const Nokta& nokta) {
    nokta1 = nokta;
    //üçgenin birinci noktasýný ayarlar
}

const Nokta& Ucgen::getNokta2() const {
    return nokta2;

}

void Ucgen::setNokta2(const Nokta& nokta) {
    nokta2 = nokta;
}

const Nokta& Ucgen::getNokta3() const {
    return nokta3;
}

void Ucgen::setNokta3(const Nokta& nokta) {
    nokta3 = nokta;
}

std::string Ucgen::toString() const {
    return "Üçgen; " + nokta1.toString() + ", " + nokta2.toString() + ", " + nokta3.toString();
    //üçgenin bir dize gösterimini döndürür. Dize gösterimi, üçgenin üç noktasýnýn bir listesidir
}

double Ucgen::alan() const {
    // üçgenin alanýný hesaplar. Alan hesaplamasý henüz implemente edilmemiþtir, bu nedenle iþlev þu anda 0.0 döndürür.
    return 0.0;
}

double Ucgen::cevre() const {
    // üçgenin çevresini hesaplar. Çevre hesaplamasý henüz implemente edilmemiþtir, bu nedenle iþlev þu anda 0.0 döndürür.
    return 0.0;
}

double* Ucgen::acilar() const {
    // üçgenin açýlarýný döndürür. Açýlar henüz hesaplanmadýðýndan, iþlev þu anda yeni bir double dizisi oluþturur ve her bir öðeye 0.0 atar.
    return new double[3] {0.0, 0.0, 0.0};
}
