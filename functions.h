/* 
 * File:   functions.h
 * Author: Chankov 
 * Provide functions for hashing input byte string 
 */

//---------------ror---------------
// Rotate Right on 3 bits through Carry 
// Input: 32 bit long 
// Output: 32 bit long 
unsigned long ror(unsigned long t); 

//--------------Hashing--------------
// Hashing input string 
// Input: char string of MAXLENGTH 
// Output: 32 bit long hash 
unsigned long Hashing(char *t); 