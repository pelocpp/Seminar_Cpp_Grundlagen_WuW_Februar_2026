#include <iostream>

void references()
{
    int n = 123;

    std::cout << "n: " << n << std::endl;

    // C
    // int* ip = & n;

    // C++: Einen Alias (Adresse) definiere

    int& rn = n;   // Das ist ein Alias

    std::cout << "via rn: " << rn << std::endl;

    // Wert von n ändern - OHNE Bezeichner n
    rn = rn + 1;

    std::cout << "n: " << n << std::endl;
}