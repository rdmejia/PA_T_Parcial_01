#include "Ejercicio01.h"
#include "string"
char Ejercicio01::lower(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return c;

    return (char)(c + 32);
}

bool Ejercicio01::isPalindrome(const char* phrase, int length)
{
    int * a = 0;
    int * b = phrase.length() - 1;


    for (int i = 0; i < length; i++) {
        if (lower(length[a]) == lower(length[b])) {
            a++;
            b--;
        }
        else {
            return false;
        }
    }
    return true;
}
