#include <iostream>
#include <math.h>

int main()
{

    float x, y, res;
    std::cout << "dame el valor numerico de: ";
    std::cout << "x: ";
    std::cin >> x;
    std::cout << "y: ";
    std::cin >> y;
    res = (sqrt(x)) / (pow(y, 2) - 1);
    std::cout << "allí tienes tu pinche resultado; " << res << "\n";

    system("pause");
    return 0;
}