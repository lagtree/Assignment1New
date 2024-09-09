//********************************************************
// fracture.c
// Author: Zachary Verreault
// Date: 9/8/2024
// Class: COP 3223, Professor Parra
// Purpose: This Program will run a series of calculations
// based on a series of User Inputs. The User will input
// the coordinates on the edges of a circular city, and the
// program will output the Distance, Perimeter, Area, Width,
// and Height between the points.
// Input: x1, x2, y1, y2 (repeated throughout each function)
//
// Output: (to the command line) A detailed analysis of the
// User's inputs, aswell as a completed calculation.
// //********************************************************

#include <stdio.h>
#include <math.h>

#define PI 3.14159  //Defining PI as 3.14159 to be used in calculations

// Declare Functions
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

//********************************************************
// void main()
//
// Purpose:     Calls the calculate(...) functions to
//                      gather their inputs, and perform
//                      their calculations.
// Called:      Once.
//********************************************************

int main() 
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    // Return 0 to indicate successful completion
    return 0;
}

//********************************************************
// void calculateDistance()
//
// Purpose:     Calculate the distance between two
//                  coordinates.
// Called:      Once.
//********************************************************

double calculateDistance() 
{
    double x1, x2, y1, y2;  // declare the city's coordinates

    // Input points
    scanf("%lf", &x1);
    scanf("%lf", &x2);
    scanf("%lf", &y1);
    scanf("%lf", &y2);

    // Compute the distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output the results
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);

    // Return the computed distance
    return distance;
}

//********************************************************
// void calculatePerimeter()
//
// Purpose:     Calculate the circumference of a circle
//                  formed between two coordinates.
// Called:      Once.
//********************************************************

double calculatePerimeter() 
{
    double x1, x2, y1, y2;  // declare the city's coordinates (again)

    // Input points
    scanf("%lf", &x1);
    scanf("%lf", &x2);
    scanf("%lf", &y1);
    scanf("%lf", &y2);

    // Compute the diameter using the distance between the points
    double diameter = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Compute the circumference (perimeter) of the circle
    double perimeter = PI * diameter;

    // Output the results
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    // Return the difficulty level
    return 2.0;
}

//********************************************************
// void calculateArea()
//
// Purpose:     Calculate the Area of a circle formed
//                  between 2 coordinates.
// Called:      Once.
//********************************************************

// Function to calculate the area of the city (circle)
double calculateArea() 
{
    double x1, x2, y1, y2;  // declare the city's coordinates (again)

    // Input points
    scanf("%lf", &x1);
    scanf("%lf", &x2);
    scanf("%lf", &y1);
    scanf("%lf", &y2);

    // Compute the diameter using the distance between the points
    double diameter = helperDiameter(x1, x2, y1, y2);

    // Compute the radius
    double radius = diameter / 2;

    // Compute the area of the circle
    double area = PI * pow(radius, 2);

    // Output the results
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The area of the city encompassed by your request is %.2lf\n", area);

    // Return the difficulty level
    return 2.0;
}

//********************************************************
// void calculateWidth()
//
// Purpose:     Calculate the width of a circle created
//                  between two coordinates.
// Called:      Once.
//********************************************************
double calculateWidth() 
{
    double x1, x2, y1, y2;  // declare the city's coordinates (again)

    // Input points
    scanf("%lf", &x1);
    scanf("%lf", &x2);
    scanf("%lf", &y1);
    scanf("%lf", &y2);

    // Compute the diameter (width) using the distance between the points
    double diameter = helperDiameter(x1, x2, y1, y2);

    // Output the results
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2lf\n", diameter);

    // Return the computed width
    return width;
}

//********************************************************
// void calculateHeight()
//
// Purpose:     Calculate the height of a circle created
//                  between two coordinates.
// Called:      Once.
//********************************************************
double calculateHeight() 
{
    double x1, x2, y1, y2;  // declare the city's coordinates (again)

    scanf("%lf", &x1);
    scanf("%lf", &x2);
    scanf("%lf", &y1);
    scanf("%lf", &y2);

    // Compute the diameter (height) using the distance between the points
    double diameter = helperDiameter(x1, x2, y1, y2);

    // Output the results
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2lf\n", diameter);

    // Return the computed height
    return height;
}

//********************************************************
// void helperDiameter(double x1,x2,y1,y2)
//
// Purpose:     Calculate the diameter of a circle created
//                  between two coordinates.
// Called:      Three times.
//********************************************************

double helperDiameter(double x1,x2,y1,y2) 
{
    double diameter = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    return diameter;
}
