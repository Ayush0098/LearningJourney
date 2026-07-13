/*
Day 7 of learning C
Objective: Complete Arrays and Pointers in C
*/

#include <stdio.h>


// Call by Reference!!! -- now changing the value of *a and *b will change it at the pointer itself, so the variable will be changed!!
void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}
void testFunction(int *n){
    *n += 50;
}

// This function is made to help myself understand the pointers!
void pointersTry(void) {
    int myArrInt[4] = {2,3,7,5};
    char myArrChar[5] = {'a', 'b', 'c', 'd', 'e'};
    double myArrDouble[3] = {2.2, 3.5, 6.5};
    char myArrString[] = "This is Ayush Raj";

    int myInt = 10;
    int *myIntPointer = &myInt;

    double myDouble = 50.1313259;
    double *myDoublePointer = &myDouble;

    char myChar = 'h';
    char *myCharPointer = &myChar;

    printf("%p\n", (void*)myArrInt); // The base pointer for myArrInt
    printf("%d\n", myArrInt[0]); // prints 2 --- value of myArrInt[0]
    printf("%p\n", (void*)(myArrInt + 3)); // The pointer for 3rd index int of myArrInt -- base + 3 * 4
    printf("%d\n", *(myArrInt + 3)); // prints 5 --- value of myArrInt[3]

    printf("%p\n", (void*)myArrChar); // The base pointer for myArrChar
    printf("%c\n", *myArrChar); // myArrChar[0] = 'a'
    printf("%p\n", (void*)(myArrChar + 4)); // The pointer for myArrChar[4] - base + 4 * 1
    printf("%c\n", *(myArrChar + 4)); // myArrChar[0] = 'e'

    printf("%p\n", (void*)(myArrDouble)); // The base pointer for myArrDouble
    printf("%lf\n", *(myArrDouble)); // The value at myArrDouble[0]
    printf("%p\n", (void*)(myArrDouble+2)); // The pointer for  myArrDouble[2] -- base + 2 * 8
    printf("%lf\n", *(myArrDouble+2)); // The value at myArrDouble[2]

    printf("%p\n", (void*)(myArrString)); // The base pointer for myArrString
    printf("%c\n", *(myArrString)); // myArrString[0]
    printf("%p\n", (void*)(myArrString + 16)); // The pointer of myArrString[16] -- base + 16 * 1
    printf("%c\n", *(myArrString + 16)); // myArrString[16]
    printf("%p\n", (void*)(myArrString + 13)); // The pointer of myArrString[13] -- base + 13 * 1
    printf("%c\n", *(myArrString + 13)); // myArrString[13]
    printf("%p\n", (void*)(myArrString + 5)); // The pointer of myArrString[5] -- base + 5 * 1
    printf("%c\n", *(myArrString + 5)); // myArrString[5]

    printf("%p\n", (void*)&myInt); // The pointer of myInt variable
    printf("%d\n", *&myInt); // Value at the pointer of myInt, basically the value of variable! (10)
    printf("%p\n", myIntPointer); // The pointer of myInt variable -- same as above
    printf("%d\n", *myIntPointer); // Value at the pointer of myInt, basically the value of variable! (10)

    printf("%p\n", (void*)&myDouble); // The pointer of myDouble variable
    printf("%lf\n", *&myDouble); // Value at the pointer of myDouble, basically the value of variable! (50.131326) -- rounded off due to only 6 significant digits allowed after decimal on type double!
    printf("%p\n", (void*)myDoublePointer); // The pointer of myDouble variable -- same as above
    printf("%lf\n", *myDoublePointer); // Value at the pointer of myDouble, basically the value of variable! (50.131326) -- rounded off due to only 6 significant digits allowed after decimal on type double!

    printf("%p\n", (void*)&myChar); // The pointer of myChar variable
    printf("%c\n", *&myChar); // Value at the pointer of myChar, basically the value of variable! ('h')
    printf("%p\n", (void*)&myCharPointer); // The pointer of myChar variable
    printf("%c\n", *myCharPointer); // Value at the pointer of myChar, basically the value of variable! ('h')
}


// Taking arrays as a parameters
double averageFunction(int howMany, int grades[]){
    double average = 0.0;
    for (int i = 0; i < howMany; i++) {
        average += grades[i] / 5.0;
    }
    return average;
}

// Printing grades of the array
void printArray(int arraySize, int grade[], char *str) {
    printf("%s", str);
}


// Sorting Algorithm for an array
// Method 1 - Recursive: I wrote this ---> Obv very bad!
void sortArrRecursive(int arraySize, int *inputArray) {
    int i = 0;
    short isSorted = 0;
    while(i < arraySize - 1) {
        if (inputArray[i] > inputArray[i+1]) {
            swap(&inputArray[i], &inputArray[i+1]);
        }
        else i++;
    }

    int j = 0;
    while (j < arraySize - 1) {
        if (inputArray[j] > inputArray[j+1]) sortArrRecursive(arraySize, inputArray);
        else j++;
    }

}

void sortArr(int arraySize, int *inputArray) {
    int i = 0;
    for (i = 0; i < arraySize - 1; i++) {
        int j = 0;
       
        // Code do do the loop step by step!
        /*
        int go_on;
        printf("Current i = %d, enter any integer to continue", i);
        scanf("%d", &go_on);
        */

        for (j = 0; j < arraySize - i - 1; j++) {
            if (inputArray[j] > inputArray[j+1]) swap(&inputArray[j], &inputArray[j+1]);
        }
    }
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", inputArray[i]);
    };

}

// Main function obv
int main(void) {
    /*
    int myArray[50] = {1};
    for (int i = 0; i<=49; i++) {
        printf("[%d] = %d\n", i, myArray[i]);
    }

    for (int i = 0; i <= 49; i++){
        myArray[i] = 50-i;
    }

    int sumArray = 0;
    for (int i = 0; i <= 49; i++) {
        sumArray += myArray[i];
    }
    

    printf("%lu\n", sizeof(myArray));
    printf("%d %d %d %d\n", myArray[49], myArray[48], myArray[47], myArray[46]);
    printf("The sum of array is %d", sumArray);
    */


    // char myString[] = "This is a string";
    // printf("%c", myString[16]);     


    /*
    const int SIZE = 5;
    int grades[] = {30,34,26,40,32};
    double sum = 0;
    double *ptr_to_sum = &sum;


    for (int i = 0; i < SIZE; i++) {
        sum += grades[i];
    }
    printf("The average is %.2f \n\n", sum / SIZE);

    printf("The pointer of sum(%lf) is %p which is %lu in decimal\n",*ptr_to_sum, ptr_to_sum, (long unsigned)ptr_to_sum);
    printf("Grades are at %lu to %lu\n", grades, grades + 4); // In C language, grades refers to grades[0] automatically!
    */


    ////////////////////////POINTERS//////////////////////////
    /*
    int a = 12;
    int *pointer_for_a = &a;
    *pointer_for_a = 24;
    printf("The pointer of %d is %p\n", *pointer_for_a, (void*)pointer_for_a);

    int n = 20;
    testFunction(&n);
    printf("n: %d\n", n);

    int b = 22;
    printf("a initial: %d, b initial: %d\n", a, b);
    swap(&a, &b);
    printf("a final: %d, b final: %d\n", a, b);
    */


    // pointersTry();


    /*
    int grades[5] = {4,5,6,7,8};
    char string[] = "This is the message\n";
    printf("The average of grades is %.2f\n", averageFunction(5, grades));
    printArray(5, grades, string);
    */

    /*
    char strMsg[] = "This is Ayush Raj";
    printf("%s", strMsg);

    int strLength = 0, i;
    for (i = 0; strMsg[i] != '\0'; i++) {
        strLength++;
    }
    printf("Length of the message is %d and the last character is %c\n", strLength, strMsg[strLength-1]);
    for (int i = 0; i < strLength; i++) {
        printf("%c", strMsg[i]);
    }
    */


    
    int myArrSize = 7;
    // int myArr[] = {519, 233,1253,4,23,13,192,5,43,56,3122,41,2341,12,211,0,20,1,1,3};
    int myArr[] = {4,6,1,4,23,1,0};

    sortArr(myArrSize, myArr);
    
    

    return 0;
}