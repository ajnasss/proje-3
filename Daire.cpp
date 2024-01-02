#pragma once
#include <string>
#include <GLFW/glfw3.h>
#include "Daire.h"
using namespace std;
Daire::Daire(const Nokta& merkez, double yaricap) : merkez(merkez), yaricap(yaricap) {}//Daire nesnesi olu�turur Dairenin merkezini ve yar��ap�n� al�r.

Daire::Daire(const Daire& other) : merkez(other.merkez), yaricap(other.yaricap) {}//bir ba�ka Daire nesnesinden bir Daire nesnesi olu�turmak i�in kullan�l�r

Daire::Daire(const Daire& other, double carpan) : merkez(other.merkez), yaricap(other.yaricap* carpan) {}
//double de�erinden bir Daire nesnesi olu�turmak i�in kullan�l�r.

double Daire::alan() const {
    // dairenin alan�n� hesaplar Alan hesaplamas� hen�z implemente edilmemi�tir, bu nedenle i�lev �u anda 0.0 d�nd�r�r
    return 0.0;
}

double Daire::cevre() const {
    // dairenin �evresini hesaplar. �evre hesaplamas� hen�z implemente edilmemi�tir, bu nedenle i�lev �u anda 0.0 d�nd�r�r
    return 0.0;
}

int Daire::kesisim(const Daire& daire) const {
    //  iki dairenin kesi�imini hesaplar Kesi�im hesaplamas� hen�z implemente edilmemi�tir, bu nedenle i�lev �u anda 0 d�nd�r�r
    return 0;
}

std::string Daire::toString() const {
    return "Merkez: " + merkez.toString() + ", Yar��ap: " + std::to_string(yaricap);
    //dairenin bir dize g�sterimini d�nd�r�r Dize g�sterimi, dairenin merkezini ve yar��ap�n� g�sterir.
}

void Daire::yazdir() const {
    std::cout << toString() << std::endl;
}

// �lgili get ve set metotlar� dairenin �zelliklerine ve i�levlerine eri�mek ve bunlar� de�i�tirmek i�in kullan�l�r.
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
