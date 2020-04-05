#include <iostream>
#include "modulator.h"

Modulator modulator;

int main()
{
    modulator.occrate = 0;

    std::cout << "Hola\r\n";
    modulator.print();


    return 0;
}
