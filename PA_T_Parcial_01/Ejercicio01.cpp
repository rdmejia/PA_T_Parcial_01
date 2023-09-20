#include "Ejercicio01.h"

bool isAlphanumeric(char c) {
    return (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z');
}

char Ejercicio01::lower(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return c;

    return (char)(c + 32);
}

bool Ejercicio01::isPalindrome(const char* phrase, int length)
{
    // Caso base: todas las frases/palabras de un caracter o menos son palindromos
    if (length < 2)
        return true;

    /* 
    *phrase == phrase[0] 
    Acortamos la frase, incrementando el apuntador de phrase y decrementando la longitud
    hasta que la frase no empiece con un caracter que no sea alphanumerico
    */

    while (!isAlphanumeric(*phrase) && length > 1) {
        ++phrase;
        --length;
    }

    /*
    Acortamos la frase si el ultimo caracter no es alfanumerico
    Si el ultimo caracter no es alfanumerico, entonces solo debemos restarle a la longitud
    */

    while (!isAlphanumeric(*(phrase + length - 1)) && length > 1) {
        --length;
    }

    /*
    Comparamos que el caracter de inicio de la frase sea
    que su ultimo caracter
    */

    if (lower(*phrase) != lower(*(phrase + length - 1)))
        return false;

    // El primer y ultimo caracter si son iguales, pasemos a comparar el segundo y el penultimo
    return isPalindrome(phrase + 1, length - 2);
}
