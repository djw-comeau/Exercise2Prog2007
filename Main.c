// Student Name: David Comeau
// Course: PROG2007 - Introduction to C
// Assignment: Exercise 2
// Instructor: Nadia Gouda
// Date: Januaru 13, 2025


#include <stdio.h>
#define pi 3.14

int main()

{
    float radius; // We're declaring a float variable for the radius. 
    const double PI = 3.14; // We're declaring a double variable for the constant Pi.
    float area, circumference; // We're declaring float variables for area and circumference.
    int circumference_int; // We're declaring a new variable to store the integer value.
    const double planck_constant = 6.626070151e-34; // We're declaring Planck's Constant. 
     
    // Input the radius of the rircle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area and the circumference.
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // This converts the float for circumference into an interger.
    circumference_int = (int)circumference;

    // Printing our results!
    printf("\nRadius of Circle: %.2f", radius);
    printf("\nCircumference of Circle (float): %.2f", circumference);
    printf("\nCircumference of Circle (int): %d", circumference_int);
    printf("\nPlanck's Constant: %e\n", planck_constant);

    return 0;
}