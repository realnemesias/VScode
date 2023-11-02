#include <iostream>

int main()
{

    char sexo[10];
    int edad;
    float estatura;

    std::cout << "humano!! dame los siguientes datos: ";
    std::cout << "\nsexo: ";
    std::cin >> sexo;
    std::cout << "\nedad: ";
    std::cin >> edad;
    std::cout << "\nestatura: ";
    std::cin >> estatura;

    std::cout << "\nHumano ahi estan tus pinches datos \n\n";
    std::cout << "Sexo: " << sexo << "\n";
    std::cout << "Edad: " << edad << "\n";
    std::cout << "Estatura: " << estatura << "\n";

    system("pause");
    return 0;
}