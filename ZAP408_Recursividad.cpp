// ZAP408_Recursividad.cpp : Este programa funciona como un temporizador para jugar a las escondidas que cuenta del 1 al 20.

// Las funciones recursivas son muy �tiles, pero es importante saber cu�ntas veces se llamar� la funci�n antes de terminar, pues puede causar un stack overflow

#include <iostream>
#include <Windows.h> // Para poder dar un espacio de tiempo entre cada n�mero

void contar(int n); // Declaramos la funci�n para poder compilar

int main()
{
    std::cout << "Juguemos a las escondidas!" << std::endl;
    std::cout << "Estas listo? (Presiona enter para empezar)" << std::endl;

    std::cin.get();

    contar(1); // Llamamos la funci�n y le decimos que empezar� desde el n�mero 1

    std::cout << std::endl << "Listos o no, aqui voy!" << std::endl;
}

// Nos permitir� contar hasta el 20 y parar.
void contar(int n)
{
    if (n > 20); // Este es el caso base que le permitir� a la funci�n llegar a un l�mite

    else
    {
        std::cout << n << std::endl;
        Sleep(1000); // Espera un segundo
        contar(n + 1); // Utilizamos la recursividad para que se vuelva a llamar la funci�n pero ahora con el n�mero siguiente
    }
}