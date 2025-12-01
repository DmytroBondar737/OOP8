#include "Liquid.h"

// Liquid
Liquid::Liquid(string n, double d) : name(n), density(d) {}

string Liquid::getName() const { return name; }
double Liquid::getDensity() const { return density; }

void Liquid::setName(string n) { name = n; }
void Liquid::setDensity(double d) { density = d; }

void Liquid::print() const {
    cout << name << " (щільність: " << density << ")" << endl;
}

// Alcohol
Alcohol::Alcohol(string n, double d, double s)
    : Liquid(n, d), strength(s) {
}

double Alcohol::getStrength() const { return strength; }

void Alcohol::setStrength(double s) { strength = s; }

void Alcohol::print() const {
    cout << name << " (щільність: " << density
        << ", міцність: " << strength << "%)" << endl;
}

// Функції
void demoFunction(Liquid& liquid) {
    cout << "В функції demoFunction: ";
    liquid.print();
}

Liquid createLiquid() {
    return Liquid("Масло", 0.92);
}
