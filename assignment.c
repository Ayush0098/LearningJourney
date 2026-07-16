/*
Ayush Raj
15/07/2026
Assignment: I've to read a raw data containing elephant weights in kg, in file names elephant_seal_data.txt, and then store into an array and calculate the average for it.
Approach: First read the txt file into an string array, and then read the integers containing weights into different array, then calculate the average!
*/

#include<stdio.h>

// This function reads a file containing integers(only integers, with no any line breaks) into an array containing those integers, also this returns 0 if it didn't read any numbers, else it returns total number of integers it read
int dataReadFromFileToArr(char *url, int totalInts, int *outArr) {
    FILE *fileOpen = fopen(url, "r");
    int intRead = 0, charsRead = 0;
    if (fileOpen == NULL) {
        printf("File Not Opened");
    }
    else {
        printf("File Opened Successfully\n");
        int n = 0;

        // THE PROBLEM IS THE READING BREAKS WHEN IT SEES ANY SIGNLE LINE END. LIKE IT IS READING ONLY SINGLE LINE and breaking after every other kind of symbol or string! -- Needs some review, maybe later
        for (; (fscanf(fileOpen, "%d%n", &outArr[intRead], &n) == 1) ; intRead++) {
            charsRead += n;
        }
    }
    fclose(fileOpen);
    printf("Chars Read: %d & Ints Read: %d\n",charsRead, intRead);
    return intRead;
}

// Just for printing an Integer Array element by element, although it's not required in this project, This is helpful for debugging
void printIntArray(int *array, int size) {
    for(int i = 0; i<size; i++) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

// The primary goal of this function is to calculate average of an integer array and return the floating point numbers
double averageCalc(int *array, int size) {
    double average = 0.0;
    for (int i = 0; i < size; i++) {
        average += (double) array[i] / size;
    }
    return average;
}

// The main function, we will call all other functions here
int main(void) {
    // The address to the file containing elephant weights
    char url[] = "./elephant_seal_data.txt";

    // Have to dynamically manage the Size!!! -- but currently due to memory management not taught yet, this will be done later
    int SIZE = 1500;
    int outString[SIZE];

    // The function dataReadFromFileToArr reads a raw data file containing integers to an array, and returns the total number of integers it read!
    SIZE = dataReadFromFileToArr(url, SIZE, outString);

    // Check if the weights were successfully parsed, if not then just tell the user and end the function
    if (SIZE) {
        printf("Successfully fetched %d integers from the string\n", SIZE);
    }
    else {
        printf("There was an error fetching weights, please try again");
        return 0;
    }
    // printIntArray(outString, SIZE); // Only for debugging

    // The averageCalc function calculates the average on all the elements of an array!
    printf("The average weights of the elephants is %.3fkg\n", averageCalc(outString, SIZE));
    return 0;
}
