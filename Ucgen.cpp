#pragma once
#include "Ucgen.h"
#include <GLFW/glfw3.h>
Ucgen::Ucgen(const Nokta& nokta1, const Nokta& nokta2, const Nokta& nokta3)
//Ucgen nesnesi olu�turur. ��genin �� noktas�n� al�r ve bunlar� nokta1, nokta2 ve nokta3 adlar�nda �zel de�i�kenlere atar.
    : nokta1(nokta1), nokta2(nokta2), nokta3(nokta3) {}

const Nokta& Ucgen::getNokta1() const {
    return nokta1;
    //��genin birinci noktas�n� d�nd�r�r
}

void Ucgen::setNokta1(const Nokta& nokta) {
    nokta1 = nokta;
    //��genin birinci noktas�n� ayarlar
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
    return "��gen; " + nokta1.toString() + ", " + nokta2.toString() + ", " + nokta3.toString();
    //��genin bir dize g�sterimini d�nd�r�r. Dize g�sterimi, ��genin �� noktas�n�n bir listesidir
}

double Ucgen::alan() const {
    // ��genin alan�n� hesaplar. Alan hesaplamas� hen�z implemente edilmemi�tir, bu nedenle i�lev �u anda 0.0 d�nd�r�r.
    return 0.0;
}

double Ucgen::cevre() const {
    // ��genin �evresini hesaplar. �evre hesaplamas� hen�z implemente edilmemi�tir, bu nedenle i�lev �u anda 0.0 d�nd�r�r.
    return 0.0;
}

double* Ucgen::acilar() const {
    // ��genin a��lar�n� d�nd�r�r. A��lar hen�z hesaplanmad���ndan, i�lev �u anda yeni bir double dizisi olu�turur ve her bir ��eye 0.0 atar.
    return new double[3] {0.0, 0.0, 0.0};
}
