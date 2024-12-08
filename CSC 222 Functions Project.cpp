// CSC 222 Functions Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Benjamin Hertzler
// CSC 222
// Functions Project
// Program 2: Inflation Trend
//

// Program Description: This program describes changes in inflation rates for the price of a single item over a 2 year period.
// Required User Input: The current price of an item, the price of the item one year ago, and its price two years ago.
// Program Output: A message indicating if the inflation rate is increasing, decreasing or has stayed the same, and by what %.
// Supplied Constants: None.
//

#include <iostream>
using namespace std;

// Function to set the prices of an item over time.
// Precondition:    Receives 3 double variables by reference.
// Postcondition:   current_price = the price of the item today.
//                  y1_old_price = the price of the item 1 year ago.
//                  y2_old_price = the price of the item 2 years ago.
//
void setPrices(double& current_price, double& y1_old_price, double& y2_old_price);

// Function to calculate the rate of inflation.
// Precondition:    new_price = the current price of the item.
//                  old_price = the previous price of the item.
// Postcondition:   returns the rate of inflation.
//
double calcRate(double new_price, double old_price);

// Function to calculate the trend between two inflation rates.
// Precondition:    receives 2 successive inflation rate percentages as decimals.
// Postcondition:   returns the trend in inflation.
double calcTrend(double y1_rate, double y2_rate);

// Function to output the result of the trend calculation.
// Precondition:    receives an inflation trend.
// Postcondition:   Outputs the trend to the console with a message indicating its direction.
void print(double trend);


int main()
{
    double p1, p2, p3, r1, r2;
    cout << " -- Inflation Trend Calculator -- " << endl << endl;
    setPrices(p1, p2, p3);
    r1 = calcRate(p1, p2);
    r2 = calcRate(p2, p3);
    print(calcTrend(r1, r2));
}

void setPrices(double& current_price, double& y1_old_price, double& y2_old_price)
{
    cout << "Current Price of Item: $";
    cin >> current_price;
    cout << "Price of the Item 1 Year Ago: $";
    cin >> y1_old_price;
    cout << "Price of the Item 2 Years Ago: $";
    cin >> y2_old_price;
}

double calcRate(double new_price, double old_price)
{
    double change = new_price - old_price;
    return (change / old_price);
}

double calcTrend(double new_rate, double old_rate)
{
    return new_rate - old_rate;
}

void print(double trend)
{
    if (trend > 0)
        cout << endl << "Inflation trend is increasing by " << (trend * 100) << "%." << endl;
    else if (trend < 0)
        cout << endl << "Inflation trend is decreasing by " << (trend * 100) << "%." << endl;
    else
        cout << endl << "No change in inflation rate." << endl;
}