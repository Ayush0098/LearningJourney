/*
Day 6 of learning C
Objectives: Learn about storage classes, arrays and pointers!
*/
#include <stdio.h>
#include <time.h>

/*
***********************Storage Classes**********************
In C, there are four main storage classes: 
    a. Storage Location - In RAM or CPU?
    b. Default Initial Value - Garbage or Zero value?
    c. Scope - Local or Global?
    d. Lifetime - Till when will the variable be active in memory?

1. auto --- RAM, Garbage Value, Local, Till execution of block/function  --- default case!
2. register --- **CPU Register(if available, else in RAM)** , Garbage Value, Local, Till execution of block/function --- Use when a variable is used too repeatedly and fast, e.g. counters of loops
3. static --- RAM, Zero, Local(if inside function), **Till Whole Program** -- The variable doesn't destroy when the block ends!
4. extern --- RAM, Zero, **Global**, **Till Whole Program** -- We use this when we want to access the variable from different files!!!

const -- This is a Type Qualifier, this makes a variable read only!

!!! Recursion is very slow thing to do!
*/

/*
extern int reps = 0;
void f(void) {
    static int called = 0;
    printf("f called %d times\n", called);
    called++;
    reps = reps + called;
}
*/

void countTillBlastLoop(void){
    int m = 10;
    for (int i = m; i> 0; i--) {
         printf("Time left to blast is %ds\n", i);
    }
    printf("Booooom!!!\n");
}

void countTillBlastRecursion(void) {
    int static timeLeft = 10;
    if (timeLeft > 0) {
        printf("Time left to blast is %ds\n", timeLeft);
        timeLeft--;
        countTillBlastRecursion();
    }
    else {
        printf("Booooooooom!!!\n");
    }
}

long factorialNormal(short n) {
    short n_new = n;
    long factorial = 1;
    for(;n > 1; n--) {
        factorial *= n;
    }
    return factorial;
}

long factorialRecursion(short n) {
    if (n==1) return 1;
    else return factorialRecursion(n-1) * n;
}

long fibonacciSeries(short n) {
    if (n == 1) return 0;
    else if (n == 2) return 1;
    else return fibonacciSeries(n-1) + fibonacciSeries(n-2);
}

long fibonacciSeriesIterative(long n) {
    long t2 = 0, t1 = 1;
    long f_old;
    for(int i = 0; i < n-1; i++) {
        f_old = t2;
        t2 = t1 + t2;
        t1 = f_old;
    }
    return t2;
}

int main(void) {
    /* Clock Start!*/
    clock_t startTime, endTime;
    long double runTime;
    startTime = clock();

    // Main Programme
    /*
    auto int i = 1;
    const int Limit = 10;
    for (i = 1; i < 10; i++) {
        printf("i local = %d, reps global = %d\n", i, reps);
        f();
    }
    */

    // countTillBlastLoop();
    // countTillBlastRecursion();

    // printf("Factorial of %hd is %ld\n", 5, factorialNormal(5));
    // printf("Factorial of %hd is %ld\n", 6, factorialRecursion(6));
    
    /*
    printf("You want the first nth term of fibonacci series, where n is: ");
    short n = 1;
    scanf("%hd", &n);
    for (int i = 1; i <= n; i++) {
        printf("%hdth term of fibonacci series is %ld\n", i, fibonacciSeries(i));
    }
    */

    /*Clock End!*/
    endTime = clock();
    runTime = ((long double) (endTime - startTime)) /CLOCKS_PER_SEC;
    printf("Programme took %LFs to execute", runTime);
    return 0;
}