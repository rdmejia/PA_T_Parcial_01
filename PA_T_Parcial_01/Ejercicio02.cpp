#include "Ejercicio02.h"
#include <iostream>

int max(int a, int b) {
    if (a > b)
        return a;
    return b;
}

int Ejercicio02::rob(int houses[], int n)
{
    /*
        - El arreglo de memo fue definido en Ejercicio02.h
        - Se llena con -1 porque puede ser que el resultado de la funcion sea cero
        - Sin memoizacion solamente 3 pruebas no hubieran pasado
    */
    std::fill_n(memo, 101, -1);
    return rob(houses, n, 0);
}

int Ejercicio02::rob(int houses[], int n, int i)
{
    // Caso base: si llegamos a la ultima casa el resultado siempre sera cero
    if (i >= n)
        return 0;

    /*
    Memoizacion: si ya sabemos cuanto es lo mas que obtendremos de robar o no
    en la casa en la posicion i, no es necesario volver a calcular
    */ 
    if (memo[i] >= 0)
        return memo[i];

    /*
    Tenemos dos opciones:
        1. Robar en esta casa, pero no la siguiente y sumar el resultado de robar las demas casas
        2. No robar en esta casa y ver como nos va intentando robar la siguiente
    */
    int robbingHere = houses[i] + rob(houses, n, i + 2);
    int notRobbingHere = rob(houses, n, i + 1);

    // Escogemos lo que sea mas alto: robar o no en esta casa
    memo[i] = max(robbingHere, notRobbingHere);

    return memo[i];
}


