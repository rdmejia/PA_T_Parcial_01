#include "Ejercicio01.h"
#include <iostream>
#include <cctype> 

char Ejercicio01::lower(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return c;

    return (char)(c + 32);
}

bool Ejercicio01::isPalindrome(const char* phrase, int length)
{
    int derecha = 0;
    int izquiera = length - 1;

    while (derecha < izquierda)
    {
        char derechaChar = std::tolower(phrase[derecha]);
        char izquierdaChar = std::tolower(phrase[izquierda]);

        if (!isalnum(derechaChar))
        {
            left+1;
            continue;
        }
        if (!isalnum(izquierdaChar))
        {
            right-1;
            continue;
        }

        if (derechaChar != derechaChar)
        {
            return false;
        }

        derecha+1;
        izquiera-1;
    }

    return true;
}
