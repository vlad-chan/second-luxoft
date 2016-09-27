/* 
 * File:   main.c
 * Author: Chankov 
 * Hashing input byte string 
 */

#include <stdio.h>
#include "functions.h"

//input byte string 
#define STR         "1234567891" 
#define STR1        "1234567890" 
#define MAXLENGTH   16

char m[MAXLENGTH] = STR;                //Input massive

int main(){ 
    printf("string: \"%s\" => ", STR);
    printf("0x%x\n", Hashing(STR));     //output hash of STR 
    
    return 0;
}
