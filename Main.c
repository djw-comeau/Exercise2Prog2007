// Student Name: David Comeau
// Course: PROG2007 - Introduction to C
// Assignment: Exercise 2
// Instructor: Nadia Gouda
// Date: January 17, 2025
// Sources Used
// https://labex.io/tutorials/c-circle-area-and-circumference-in-c-123197
// https://www.w3schools.com/c/c_constants.php
// https://www.w3schools.com/c/c_variables_change.php
// https://www.geeksforgeeks.org/g-fact-41-setting-decimal-precision-in-c/
// Why did we write this code? This code is to demonstrate the following:
// Use Floating-Point Numbers
// Demonstrate Type Conversion
// Use Scientific Notation

#include <stdio.h>

int main()

{
    float radius; // We're declaring a float variable for the radius. 
    const double PI = 3.14; // We're declaring a double variable for the constant Pi.
    float area, circumference; // We're declaring float variables for area and circumference.
    int circumference_int; // We're declaring a new variable to store the integer value.
    const double planck_constant = 6.626070151e-34; // We're declaring Planck's Constant. 
     
    // Input the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area and the circumference.
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // This converts the float for circumference into an interger.
    circumference_int = (int)circumference;

    // Printing our results!
    printf("\nArea of Circle: %.2f", area);
    printf("\nRadius of Circle: %.2f", radius);
    printf("\nCircumference of Circle (float): %.3f", circumference);
    printf("\nCircumference of Circle (int): %d", circumference_int);
    printf("\nPlanck's Constant: %e\n", planck_constant);

    return 0;
}