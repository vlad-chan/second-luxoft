/* 
 * File:   functions.c
 * Author: Chankov 
 * Provide functions for hashing input byte string 
 */ 

//--------------ror--------------
// Rotate Right on 3 bits through Carry 
// Input: 32 bit long 
// Output: 32 bit long 
unsigned long ror(unsigned long t){
    unsigned long tmp; 
    
    tmp = t & 0x07; 
    t = t >> 3; 
    tmp = tmp << 29; 
    
    return (t | tmp);
} 

//--------------Hashing--------------
// Hashing input string 
// Input: char string 
// Output: 32 bit long hash 
unsigned long Hashing(char *t){
    unsigned long a, b;         //A, B
    unsigned int i = 0;         //Counter for massive 
    
    a = 0xAC92C155;             //Initial 
    b = 0xB4C17C82;             //conditions for A, B 
    
    while(t[i] != '\0'){        //Stop cycle, when reached end of the string 
        a = a ^ t[i];           //A = A XOR M[i]
        b = b + a;              //B = B + A 
        
        if(b & 0x80000000){     //Mask B to pick out MSB 
            b = b ^ 0x2985EB9D; //MSB of B is "1"
        } 
        else{
            b = b ^ 0x513383B1; //MSB of B is "0" 
        }
        
        a = ror(a);             //A = ROR(A) 
        i++;                    //Increment to change index number 
    }
    
    return (a ^ b);             //res = A XOR B
} 
