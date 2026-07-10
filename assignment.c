/*
Ayush Raj
Date: 10th July, 2026
Objective: The goal is to print the value of sin and cos in the range of (0,1) in a nice tabular format
Approach: This can be done by including math.h library, that contains sin and cos, then create a function which prints the values in a nice way, and then will call that function in the main one, this ensures the reusabiltiy of the code!
*/

#include<stdio.h> /* has printf(), scanf() etc.*/
#include<math.h> /* has  sin(), abs(), and fabs() */

// The function which prints the sine and cosine table in range of (0,1)
int sinCosTable(void) {
    double i, h = 0.05;     // double data type because we are dealing in the floating points, and the most common to deal with these is double!
    printf("   arg  \t   sin  \t   cos  \n");   // indentation added to match the usual 6 significant digits after decimal of a double so that the table looks nice!
    for (i = 0.000001; i < 1; i += h) {         // initialized i to 0.000001 because in the assignment it says in range of (0,1)
        printf("%lf\t%lf\t%lf\n", i, sin(i), cos(i));
    }
    return 0;
}

// The main function in where we call all other functions, in this case the sinCosTable();
int main(void) {
    sinCosTable();  // This function prints the sine and cosine in range of (0,1) in a nice tabular format!
    return 0;
}