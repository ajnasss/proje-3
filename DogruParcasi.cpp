#pragma once
#include <GLFW/glfw3.h>
#include "DogruParcasi.h"
using namespace std;
//DogruParcasi nesnesi olu�turur. Do�ru par�as�n�n iki noktas�n� al�r.
DogruParcasi::DogruParcasi(const Nokta& nokta1, const Nokta& nokta2) : nokta1(nokta1), nokta2(nokta2) {}

DogruParcasi::DogruParcasi(const DogruParcasi& other) : nokta1(other.nokta1), nokta2(other.nokta2) {}
//bir ba�ka DogruParcasi nesnesinden bir DogruParcasi nesnesi olu�turmak i�in kullan�l�r.

DogruParcasi::DogruParcasi(const Nokta& ortaNokta, double uzunluk, double egim) {
    //  bir orta nokta, bir uzunluk ve bir e�imden bir DogruParcasi nesnesi olu�turmak i�in kullan�l�r implementasyon olur
}

const Nokta& DogruParcasi::getNokta1() const {
    return nokta1;
}
//do�ru par�as�n�n birinci noktas�na eri�mek ve onu de�i�tirmek i�in kullan�l�r.
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
    // implemente edilmemi� i�levler
    return Nokta();
}

std::string DogruParcasi::toString() const {
    //do�ru par�as�n�n bir dize g�sterimini d�nd�r�r
    return nokta1.toString() + " - " + nokta2.toString();
}

void DogruParcasi::yazdir() const {
    std::cout << toString() << std::endl;
}
