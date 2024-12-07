// CSC 222 Functions Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Benjamin Hertzler
// CSC 222
// Functions Project
// Program 1: Properties of a Circle
//

// Program Description: This program calculates the radius, circumference, and area of a circle.
// Required User Input: The coordinates of the center point and a point on the circumference of a circle, separated by whitespace.
// Program Output: The radius, circumference, and area of the circle.
// Supplied Constants: The value of pi (3.1416).
//

#include <iostream>
#include <exception>
#include <cmath>
using namespace std;

#define PI 3.1416

// Function to calculate the distance between two points.
// Precondition: Receives two cartesian coordinates.
//      x1, y1 = first (x, y) pair.
//      x2, y2 = second (x, y) pair.
// Postcondition: Returns the distance between the two points.
//
double calcDistance(double x1, double y1, double x2, double y2);

// Function to calculate the radius of a circle.
// Precondition: Receives the cartesian coordinates of the center of a circle and a point on its circumference.
//      center_x, center_y = (x, y) coordinates of the center point.
//      circum_x, circum_y = (x, y) coordinates of any point on the circumference.
// Postcondition: Returns the radius of the circle.
// 
double calcRadius(double center_x, double center_y, double circum_x, double circum_y);

// Function to calculate the circumference of a circle.
// Precondition: Receives the radius of a circle.
// Postcondition: Returns the circumference of the circle.
//
double calcCircumference(double r);

// Function to calculate the area of a circle.
// Precondition: Receives the radius of a circle.
// Postcondition: Returns the area of the circle.
//
double calcArea(double r);

int main()
{
    double ctr_x, ctr_y, pt_x, pt_y, radius;

    cout << "-- Properties of a Circle --" << endl;
    cout << endl << "Enter Coordinates (x, y) for the following attributes of a circle, separated by whitespace: " << endl;
    cout << "Center Point: ";
    cin >> ctr_x >> ctr_y;
    cout << "Point on Circumference: ";
    cin >> pt_x >> pt_y;

    radius = calcRadius(ctr_x, ctr_y, pt_x, pt_y);
    cout << endl << "Radius: " << radius << endl;
    cout << "Circumference: " << calcCircumference(radius) << endl;
    cout << "Area: " << calcArea(radius) << endl;
}

double calcDistance(double x1, double y1, double x2, double y2)
{
    double x = x2 - x1;
    double y = y2 - y1;

    x *= x;
    y *= y;

    return sqrt(x + y);
}

double calcRadius(double center_x, double center_y, double circum_x, double circum_y)
{
    return calcDistance(center_x, center_y, circum_x, circum_y);
}

double calcCircumference(double r)
{
    return 2 * PI * r;
}

double calcArea(double r)
{
    r *= r;
    return PI * r;
}

