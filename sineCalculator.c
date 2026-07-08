/*
Ayush Raj
Sine calculator
Objective: The Key objective of this project is to take a input of argument for the sine function from the user and then give the output of the value of sine of that, while ensuring that the input is between 0 to 1 only!
Vision: Create a function for taking the input, verifying if it is in between 0 and 1 and then call the function in the main one
July 5, 2026
*/

#include<stdio.h>       // Preprocessor for Print
#include<math.h>        // For Maths libraries(sin)

// Function for taking input and printing the value of sine, this ensures the range is between 0 to 1 and is re-usable!
// using double datatype because the values will be a float, and the most commonly used is double for this!
int sineFunction(void){
    double arg=0.0;       // arg is the argument for the sine
    printf("Input the sine argument: ");
    scanf("%lf", &arg);   // Takes the input of argument and saves it to the address of arg

    // Check if the argument is in between 0 to 1
    if (arg > 0.0 && arg < 1.0) {           // Our valid case leads to successfully printing the value of sine
        printf("\nsin(%lf) is %lf", arg, sin(arg));
    }
    else {                                  // If the input from user isn't between 0 to 1, prompt the user to input between 0 and 1 again, and recall the function!
        printf("Please enter an input between 0 and 1\n");
        sineFunction();
    }
    return 0;

}

// The Main function to call the other functions, we've only sineFunction yet so only calling that!
int main(void) {
    sineFunction();     // Calling the function
    return 0;
}