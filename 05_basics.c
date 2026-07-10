/*
Day 5 of learning C
Objective: Get into advance of C language which includes the functions!
Learnings: 
*** We don't use float comparision for setting the condition, because there will be some error due to storing in binary and all!
*/
#include<stdio.h>

// Switch Statement -- Used only for exact equalities, not for any range kinda things(for that use if else statement)
int switchStatement(void) {
    int i;
    // double j = 20.0;
    printf("Enter your number: ");
    scanf("%d", &i);
    switch(i) {
        case 10: {
            printf("Case 10");
            break;
        };
        case 20: {
            printf("Case 20");
            break;
        }
        default: {
            printf("Default case");
            break;
        }
        printf("Continued!");
    }
    return 0;
}

void printAddress(void) {
    printf("Aditya-Ayush Bhawan, Dekuli Ghat, Anand Nagar\nCity- BiharSharif, District- Nalanda, State- Bihar, Pin- 803101\nLandmark: Near Raj Homeo Hall");
}

void lovePrinter(int repeat) {
    printf("I love you ");
    int i;
    for(i = 1; i <=repeat; i++) {
        printf(" very ");
    }
    printf("much");
}

double sum(double a, double b) {
    return a + b;
}

// Function prototyping!
double cube(double);    
double square(double);

int sumTo_n_Numbers(int n) {
    int sum = 0;
    for (; n>0; n--) {
        sum += n;
    }
    return sum;  // automatically it will change it back to int type! -- as the return type is int
}

// Main Function
int main(void) {
    // switchStatement();
    // printAddress();
    
    /*
    int repeat = 0;
    printf("How much do you love her: ");
    scanf("%d", &repeat);
    lovePrinter(repeat);
    */

    // printf("The sum of 7.5 and 8.1 is %lf", sum(7.5,8.1));

    /*
    double i = 3.5;
    printf("Cube of %lf is %lf", i, cube(i));
    */

    /*
    int n, i, j;
    printf("List of square and cubes from 1 to n, where n is: ");
    scanf("%d", &n);
    for (i = 1; i <= n-1; i++ ){
        for (j = 0; j<=10;j++) {
            printf("%lf\t%lf\t%lf\n", i + j/10.0, square(i + j/10.0), cube(i + j/10.0));
        }
    }
    */

    /*
    int m = (int) 3.5; // Type Casting
    printf("sum upto %lf is %d\n",3.5 * m, sumTo_n_Numbers(3.5 * m));
    */
   
    return 0;       // At the end of main, we return 0 to tell the OS that the code executed well!, as a convention!
}


// Function Declaration for the prototypes made earlier!
double square(double a) {
    return a * a;
}
double cube(double a) {
    return a * a* a;
}

