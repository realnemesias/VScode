#include <iostream>

int main()
{

    float a, b, aux;
    std::cout << "has lo siguiente";
    std::cout << "\nvalor de a: ";
    std::cin >> a;
    std::cout << "\nvalor de b: ";
    std::cin >> b;
    aux = a;
    a = b;
    b = a;
    b = aux;
    std::cout << "valores intercambiados";
    std::cout << "valor de a: " << a << "\n";
    std::cout << "valor de b: " << b << "\n";

    system("pause");
    return 0;
}