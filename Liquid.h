#pragma once
#include <iostream>
#include <string>
using namespace std;

class Liquid {
protected:
    string name;
    double density;
public:
    Liquid(string n = "", double d = 0);
    string getName() const;
    double getDensity() const;
    void setName(string n);
    void setDensity(double d);
    virtual void print() const;
};

class Alcohol : public Liquid {
private:
    double strength;
public:
    Alcohol(string n = "", double d = 0, double s = 0);
    double getStrength() const;
    void setStrength(double s);
    void print() const override;
};

// Функція для демонстрації
void demoFunction(Liquid& liquid);
Liquid createLiquid();
