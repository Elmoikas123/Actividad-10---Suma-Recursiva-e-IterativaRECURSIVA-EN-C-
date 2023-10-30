// Actividad 10 - Suma Recursiva e IterativaRECURSIVA EN C++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int sumaRecursiva(int n)
{
    if (n <= 9)
    {
        return n;
    }
    else
    {
        return sumaRecursiva(n / 10) + n % 10;
    }
}

int main()
{
    int numero = 12345;
    int resultado = sumaRecursiva(numero);
    std::cout << "La suma de los dIgitos de " << numero << " es " << resultado << std::endl;

    return 0;
}