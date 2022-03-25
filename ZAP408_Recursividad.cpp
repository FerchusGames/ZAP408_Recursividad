// ZAP408_Recursividad.cpp : Este programa funciona como un temporizador para jugar a las escondidas que cuenta del 1 al 20.

// Las funciones recursivas son muy útiles, pero es importante saber cuántas veces se llamará la función antes de terminar, pues puede causar un stack overflow

#include <iostream>
#include <Windows.h> // Para poder dar un espacio de tiempo entre cada número

void contar(int n); // Declaramos la función para poder compilar

int main()
{
    std::cout << "Juguemos a las escondidas!" << std::endl;
    std::cout << "Estas listo? (Presiona enter para empezar)" << std::endl;

    std::cin.get();

    contar(1); // Llamamos la función y le decimos que empezará desde el número 1

    std::cout << std::endl << "Listos o no, aqui voy!" << std::endl;
}

// Nos permitirá contar hasta el 20 y parar.
void contar(int n)
{
    if (n > 20); // Este es el caso base que le permitirá a la función llegar a un límite

    else
    {
        std::cout << n << std::endl;
        Sleep(1000); // Espera un segundo
        contar(n + 1); // Utilizamos la recursividad para que se vuelva a llamar la función pero ahora con el número siguiente
    }
}