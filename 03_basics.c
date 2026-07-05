/*
Day 3 of learning C
Key Objective: Complete lexical elements and operators of C
*/

#include <stdio.h>  // Preprocessor


// Try One
int tryOne(void) {
    unsigned a = -5, b = 7, c=0;
    c = a + b;
    printf("a: %u, b: %u, c: %u\n", a,b,c);
    return 0;
}



// *** In C the size is not fixed, there is a general rule that the size of long double will be equal more than double which has more than or equal to float***
int size(void) {
    printf("On my computer, the size of different datatypes are:\n");
    printf("The size of int is %lu bytes\n", sizeof(int));                              //4 bytes
    printf("The size of short int is %lu bytes\n", sizeof(short int));                 //2 bytes
    printf("The size of long int is %lu bytes\n", sizeof(long int));                    //8 bytes
    printf("The size of unsigned int is %lu bytes\n", sizeof(unsigned int));            //4 bytes
    printf("The size of long unsigned int is %lu bytes\n", sizeof(long unsigned int));  //4 bytes
    printf("The size of float is %lu bytes\n", sizeof(float));                          //4 bytes
    printf("The size of double is %lu bytes\n", sizeof(double));                        //8 bytes
    printf("The size of long double is %lu bytes\n", sizeof(long double));              //8 bytes
    printf("The size of char is %lu bytes\n", sizeof(char));                            //1 byte
    return 0;
}


// Getting the ascii of a character
int ascii(void){
    char character = 'a';
    char sign = '\a';
    printf("The character %c in ASCII table is %d\n", character, character);
    printf("The three consecutive characters are:\n%c is %d\n%c is %d\n%c is %d\n", character, character, character+1, character+1, character+2, character+2);
    printf("The three bells are %c%c%c", sign, sign, sign);
    return 0;
}


/*
                Data Types Summary:
1.  int         4 bytes %d
2.  short int   2 bytes %hd
3.  long int    8 bytes %ld
4.  unsigned int4 bytes %u
5.  unsigned short int  2 bytes %hu
6.  unsigned long int   8 bytse %lu
7.  float       4 bytes %f
8.  double      8 bytes %lf
9.  long double 8 bytes %LF
*/

// Try Two
int tryTwo(void){
    int x = 65;
    printf("Integer %d is equivalent to character %c\n", x, x);
    return 0;
}

// Try Three
int tryThree(void){
    short short_a = 35;
    int int_a = 35;
    long long_a = 35l;
    unsigned unsigned_a = 35u;
    unsigned long unsignedLong_a = 35ul;
    printf("Short %hd divided by int 2 is %hd and the size of short is %lu bytes\n", short_a, short_a/2, sizeof(short_a));
    printf("Short %hd divided by float 2.0 is %f and the size of short is %lu bytes\n", short_a, short_a/2.0, sizeof(short_a));
    printf("%d as a character is %c, and when %d is divided by 2, it is %d, which corresponds to %c", int_a, int_a, int_a, int_a/2, int_a/2);
    return 0;
}

// Try Four
int tryFour(void){
    printf("%d", 12.3e12 == 12.3e12+0.000001);
    return 0;
}



int main(void) {
    // tryOne();
    // size();
    // ascii();
    // tryTwo();
    // tryThree();
    tryFour();
    return 0;
}
