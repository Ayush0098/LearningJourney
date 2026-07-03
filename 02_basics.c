/*
Day 2 of learning C
Key Objective: Learn the basic data types, how to take inputs, outputs, and more
*/
#include <stdio.h> // It's the pre-processor --- It will be done before the compilation

/*
Function to convert miles and yards into kilometres
Learnings:
    We can't directly just assign a variable, first we need to declare it and it's data type
    If we assign a long float to the integer, it automtically gets truncated
    Operators containing different data types, results in the final data type that is more explicit

int main(void){ 
    int miles = 0, yards = 0;
    printf("Total Miles: ");
    scanf("%d",&miles);
    printf("Total Yards: ");
    scanf("%d", &yards);
    double kilometres;
    kilometres = (miles + yards/1760.0) * 1.609;
    printf("%d miles and %d yards computes to %lf kilometres",miles, yards, kilometres);
    return 0;
}
*/

/*
Function to convert Celsius to Fahrenheit
Learnings:
    &celsius means looking for the address of the celsius and assign it the value, without &, it would just search and access the data of that variable

int main(void) {
    int celsius, fahrenheit;
    printf("Please enter celsius as an integer: ");
    scanf("%d", &celsius);
    fahrenheit = celsius * 1.8 + 32;
    printf("\n %d celsius converts to %d fahrenheits\n", celsius, fahrenheit);
    return 0;
}
*/

/*
Read in 2 floats, and print their sum

int main(void)
{
    double firstNumber, secondNumber, sum; // This is also a way to comment!
    printf("Enter first number as a float: ");
    scanf("%lf", &firstNumber);
    printf("\nEnter second number as a float: ");
    scanf("%lf", &secondNumber);
    sum = firstNumber + secondNumber;
    printf("The sum of %lf and %lf is %lf.\n", firstNumber, secondNumber,sum);
    return 0;
}
*/

/*
Operators in C
*/
int main(){
    int a=-5, b=3, x=0;
    double c=10.0, d=3.5, y=0.0;
    x = 3/5.0;
    y = 3/5.0;
    printf("a = %d, b = %d, c = %lf, d = %lf x = %d and y = %lf",a,b,c,d,x,y);
    
    return 0;
}