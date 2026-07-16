/* The main goal of this file is to learn parsing data from a string*/

#include <stdio.h>

int main(void) {
    char dataStr[] = "Ayush, 31,a 5.8";
    char name[30];
    int age;
    float height;
    int numberOfData = sscanf(dataStr, "%[^,], %d,a %f", name, &age, &height);
    printf("Successfully parsed %d data\n", numberOfData);
    printf("The name of the person is %s, he is %d years old and his height is %.1f\n", name, age, height);

    char intStr[] = "10 20 30 40 50";
    char *ptr = intStr;
    int bytesRead = 0, num;
    while (sscanf(ptr, "%d%n", &num, &bytesRead) == 1) {
        printf("%d - %d\n", num, bytesRead);
        ptr += bytesRead; 
    }
    return 0;
}