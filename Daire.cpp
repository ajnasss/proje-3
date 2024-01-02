#pragma once
#include <string>
#include <GLFW/glfw3.h>
#include "Daire.h"
using namespace std;
Daire::Daire(const Nokta& merkez, double yaricap) : merkez(merkez), yaricap(yaricap) {}//Daire nesnesi oluþturur Dairenin merkezini ve yarýçapýný alýr.

Daire::Daire(const Daire& other) : merkez(other.merkez), yaricap(other.yaricap) {}//bir baþka Daire nesnesinden bir Daire nesnesi oluþturmak için kullanýlýr

Daire::Daire(const Daire& other, double carpan) : merkez(other.merkez), yaricap(other.yaricap* carpan) {}
//double deðerinden bir Daire nesnesi oluþturmak için kullanýlýr.

double Daire::alan() const {
    // dairenin alanýný hesaplar Alan hesaplamasý henüz implemente edilmemiþtir, bu nedenle iþlev þu anda 0.0 döndürür
    return 0.0;
}

double Daire::cevre() const {
    // dairenin çevresini hesaplar. Çevre hesaplamasý henüz implemente edilmemiþtir, bu nedenle iþlev þu anda 0.0 döndürür
    return 0.0;
}

int Daire::kesisim(const Daire& daire) const {
    //  iki dairenin kesiþimini hesaplar Kesiþim hesaplamasý henüz implemente edilmemiþtir, bu nedenle iþlev þu anda 0 döndürür
    return 0;
}

std::string Daire::toString() const {
    return "Merkez: " + merkez.toString() + ", Yarýçap: " + std::to_string(yaricap);
    //dairenin bir dize gösterimini döndürür Dize gösterimi, dairenin merkezini ve yarýçapýný gösterir.
}

void Daire::yazdir() const {
    std::cout << toString() << std::endl;
}

// Ýlgili get ve set metotlarý dairenin özelliklerine ve iþlevlerine eriþmek ve bunlarý deðiþtirmek için kullanýlýr.
const Nokta& Daire::getMerkez() const {
    return merkez;
}

void Daire::setMerkez(const Nokta& nokta) {
    merkez = nokta;
}

double Daire::getYaricap() const {
    return yaricap;
}

void Daire::setYaricap(double value) {
    yaricap = value;
}
