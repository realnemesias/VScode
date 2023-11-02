#include <iostream>

int main()
{
    float a, b, c;

    std::cout << "Insecto dame dos numeros: ";
    std::cout << "\nvalor de a: ";
    std::cin >> a;
    std::cout << "\nvalor de b: ";
    std::cin >> b;

    c = a / b + 1;
    std::cout.precision(4);
    std::cout << "\nel resultado es: " << c << "\n";
    system("pause");
    return 0;
}