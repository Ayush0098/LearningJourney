/*
Day 1 of learning C
Key Objective: Just get things installed, and get some basics of syntax 
*/
#include <stdio.h> /*Why do we even include? and what's exactly is stdio.h?*/
#define PI 3.14159 /*We use only 6 significant digits in a double*/
int main() {
    double area = 0.0, radius = 0.0;
    printf("Enter Radius: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("Radius of %lf metres, the area is %lf sq. metres", radius, area);
    return 0;
}

