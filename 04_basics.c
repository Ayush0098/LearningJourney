/*
Day 4 of learning C
Key Objectives: Getting into the depth of data types, using maths library, and the cons of precision losses of floats and double
*/
#include<stdio.h>
#include<math.h>

int precision(void){
    double x = 12345.123451234512345, y = 12345.123451234510000;
    printf("x is %lf and y is %lf\n", x,y);     // By default till 6 decimal digits
    printf("x: %.17f, y: %.17f\n",x,y);         // %.17f instructs to print 17 decimal digits along with 5 integral digits, but the precision limit of the double is 15-16 only, thus it just rounds it off and both x and y gets printed same!
    printf("x: %.11f, y: %.11f\n",x,y);
    return 0;
}

int conversionCharacters(void){
    double z = 123.456789;                      // 1.234568e+02
    printf("z is %e", z);
    return 0;
}

int trigo(void) {
    double two_pie = 2 * M_PI;
    double h = 0.1;
    double x;

    for (x = 0.0; x < two_pie; x += h) {
        printf("%5.1f: %.15e\n", x, sin(x) * sin(x) + cos(x) * cos(x));
    };
    return 0;
}

int ifElseStatements(void) {
    int outside, weather;
    printf("If outside then enter 1 else enter 0: ");
    scanf("%d", &outside);
    printf("If raining then enter 1 else enter 0: ");
    scanf("%d", &weather);

    if (outside && weather) {
        printf("Please take an umbrella!");
    }
    else {
        printf("Just wear normal dress!");
    }

    return 0;
}

int whileStatement(void){
    int i = 1;
    while(i < 10) {
        printf("%d. Yes\n", i);
        i++;
    }
    return 0;
}

// How to input a file in here?
int charReader(void) {
    int blanks = 0, letters = 0, digits = 0, others = 0;
    int c;
    while((c = getchar()) != EOF){
        if (c == ' ') blanks++;
        else if(c >= 'a' && c <= 'z' || c >= 'a' && c <= 'z') letters++;
        else if(c >= '0' && c <= '9') digits++;
        else others++;
    }

    printf("%d blanks, %d letters, %d digits, %d others\n", blanks, letters, digits, others);
    return 0;
}

int charReader2(void) {
    int blanks = 0, letters = 0, digits = 0, others = 0;
    int c;
    for (;(c = getchar()) != EOF;) {
        if (c == ' ') blanks++;
        else if(c >= 'a' && c <= 'z' || c >= 'a' && c <= 'z') letters++;
        else if(c >= '0' && c <= '9') digits++;
        else others++;
    }
    
    printf("%d blanks, %d letters, %d digits, %d others\n", blanks, letters, digits, others);
    return 0;
}

// Ternary Operator and Comma Operator
int ternaryOperator(void) {
    int a = 5, b = 9;
    int c = a > b ? a : b;          // Ternary operator -- replaces if else
    int d = (++a, b++);             // Comma Operator -- 
    printf("a is %d, b is %d, c is %d and d is %d", a, b, c,d);
    return 0;
}

// Speeding ticket dega mae!
int speedingTicket(void) {
    int speed = 0;
    printf("Enter your speed: ");
    scanf("%d", &speed);
    speed = speed <= 0? 0: speed <= 65 ? 65 : speed <= 70 ? 70 : 90 ;
    switch(speed) {
        default : printf("Incorrect Speed"); break;
        case 65: printf("No Speeding ticket"); break;
        case 70: printf("Speeding ticket"); break;
        case 90: printf("Excessive Speeding ticket"); break;
        case 0: printf("Zero ya negative speed kaise sambhav hai bhai"); break;
    }
    return 0;
}

int main(void){
    // precision();
    // conversionCharacters();
    // trigo();
    // ifElseStatements();
    // whileStatement();
    // charReader();
    // charReader2();
    // ternaryOperator();
    // speedingTicket();
}