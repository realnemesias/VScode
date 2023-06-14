#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

void PulsarTecla(char Tecla)
{
    keybd_event(VkKeyScan(Tecla),0x9e,0 , 0); //Pulsamos una tecla (Letra)
}

void SoltarTecla(char Tecla)
{
    keybd_event(VkKeyScan(Tecla),0x9e, KEYEVENTF_KEYUP,0); // //Soltamos una tecla (Letra)
}

int main()
{
    DWORD min,max;
    char tecla;
    srand(time(0));

    cout<<"Introduce intervalo minimo (s): ";
    cin>>min;

    cout<<"Introduce intervalo maximo (s): ";
    cin>>max;

    cout<<"Introduce la tecla: ";
    cin>>tecla;

    min *= 1000; // pasar a milisegundos
    max *= 1000;

    while (1)
    {
        Sleep((rand() % max)+ min);
        PulsarTecla(tecla);
        SoltarTecla(tecla);
    }
    return 0;
}