#include "Liquid.h"
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "=== Лабораторна №8: Спадкування ===\n";

    // 1. Базовий клас
    Liquid water("Вода", 1.0);
    water.print();
    water.setDensity(1.05);
    water.print();

    cout << endl;

    // 2. Похідний клас
    Alcohol vodka("Горілка", 0.94, 40.0);
    vodka.print();
    vodka.setStrength(45.0);
    vodka.print();

    cout << "\n=== Принцип підстановки ===\n";

    // 3. Похідний клас у функції для базового
    demoFunction(vodka);  // Alcohol передається як Liquid

    // 4. Масив базового класу
    Liquid* arr[2];
    arr[0] = &water;
    arr[1] = &vodka;

    for (int i = 0; i < 2; i++) {
        arr[i]->print();  // Поліморфізм
    }

    // 5. Функція повертає Liquid
    Liquid oil = createLiquid();
    oil.print();

    return 0;
}
