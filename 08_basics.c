/*
Day 8 of learning C
Objectives: Merge Sort
*/

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void pushToArr(int initArraySize, int pushArraySize, int *initArr, int *pushArr) {
    int i;
    for (i = 0; i < pushArraySize; i++) {
        initArr[i + initArraySize] = pushArr[i];
    }
    printf("The pushed array is: \n");
    for (int k = 0; k < initArraySize + pushArraySize; k++) {
        printf("%d ", initArr[k]);
    }

}

void mergeTwoSorted(int arrayOneSize, int arrayTwoSize, int *arrayOne, int *arrayTwo, int *mergedArr) {
    // int mergedArr[arrayOneSize + arrayTwoSize];
    int maxRecur = arrayOneSize > arrayTwoSize ? arrayTwoSize : arrayOneSize;
    int i = 0, j = 0;
    while (i < maxRecur && j < maxRecur) {
        if (arrayOne[i] <= arrayTwo[j]) {
            mergedArr[i + j] = arrayOne[i];
            i++;
        }
        else {
            mergedArr[i + j] = arrayTwo[j];
            j++;
        }
    }
    if (arrayOneSize > arrayTwoSize) {
        for (; i < arrayOneSize; i++) {
            mergedArr[i + j] = arrayOne[i];
        }
    }
    else if (arrayOneSize < arrayTwoSize) {
        for (; j < arrayTwoSize; j++) {
            mergedArr[i + j] = arrayTwo[j];
        }
    }

    printf("The merged array is: \n");
    for (int k = 0; k < arrayOneSize + arrayTwoSize; k++) {
        printf("%d\t", mergedArr[k]);
    }
}


void mergeSort(int arrSize, int *sizeOfSortedArr,int *arr, int *sortedArr) {
}


int main(void) {
    int myArrSize = 20;
    int myArr[] = {519, 233,1253,4,23,13,192,5,43,56,3122,41,2341,12,211,0,20,1,1,3};
    int myArrOne[] = {-10,1,4,5,6,7,10,11,14};
    int myArrOneSize = 9;
    int myArrTwoSize = 5;
    int myArrTwo[] = {1,7,8,10,12};

    int sortedArray[myArrOneSize + myArrTwoSize];

    mergeTwoSorted(myArrOneSize, myArrTwoSize, myArrOne, myArrTwo, sortedArray);

    // for (int i = 0; i< myArrSize; i++) {
    //     printf("%d ", myArr[i]);
    // }


    return 0;
}