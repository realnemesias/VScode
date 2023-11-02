#include <iostream>

int main()
{

    float practicas, participacion, examen, promedio;

    std::cout << "dame tus reseltados de lo siguiente: ";
    std::cout << "dame tus reseltados de practicas ";
    std::cin >> practicas;
    std::cout << "dame tus reseltados de participacion ";
    std::cin >> participacion;
    std::cout << "dame tus reseltados de examen ";
    std::cin >> examen;

    practicas *= 0.40;
    participacion *= 0.20;
    examen *= 0.40;

    promedio = practicas + participacion + examen;
    std::cout << "tu promedio es: " << promedio << "\n";
    system("pause");
    return 0;
}