// plays the type of char, at PM 12:00 by Queenie

#include "stddef.h"

void char2Uchar(){

    wchar_t wc = L'\x3B1'; // greece a in downcast
    char str[10] = ""; // define str as a sting og 10 char
    int byte = 0; // define bit and bytes in int

    byte = wctomb(str, wc);
    if(byte < 0)
        puts("invalid char in local");

};

int main(){

    char2Uchar();
    return 0;

};

// wctomb is invalid in C99
// puts() is invalid in C99