/*

    This program will pass an item's wholesale cost and markup percentage
    as arguments to a function, and calculate its the retail price.

1. Ask the user to enter the wholesale cost and markup percentage of the item.
2. Call the calculate retail function and pass the user's inputs as arguments
        In the function:  {
            Calculate the retail price of the item.
            Return the result.
        }
4. Store the retail price of the item.
5. Display the retail price of the item to the user.

*/


// This program will pass an item's wholesale cost and markup percentage
// as arguments to a function, and calculate its the retail price.

#include <iostream>
#include <iomanip>

using namespace std;

double calculateRetail(double, double);  // Prototype of the function that will calculate an item's retail price.

    // Main function.
int main()
{
        // Declare variables.
    double wholesaleCost;  // The wholesale cost of the item.
    double markUpPercentage;  // The markup percentage of the item.

        // Ask the user to enter the wholesale cost and markup percentage of the item.
    cout << "Enter the item's wholesale cost: ";
    cin >> wholesaleCost;

    cout << "Enter the item's markup percentage: ";
    cin >> markUpPercentage;

        // Set the desired output formatting for numbers.
    cout << setprecision(2) << fixed << showpoint;

        // Call the calculate retail function and pass the user's inputs as arguments, and display the result.
    cout << "The item's retail price is: $" << calculateRetail (wholesaleCost, markUpPercentage) << endl;

    return 0;
}

    // Function for calculating an item's retail price.
double calculateRetail(double wholesaleCost, double markUpPercentage)
{
        // Calculate the retail price of the item.
    return ( wholesaleCost + ( (markUpPercentage / 100.0) * wholesaleCost) );
}

/*

    RUN 1: wholesale cost = 7, markup% = 50

Enter the item's wholesale cost: 7
Enter the item's markup percentage: 50
The item's retail price is: $10.50

    ---------------------------------------

    RUN 2: wholesale cost = 5.00, markup% = 100

Enter the item's wholesale cost: 5.00
Enter the item's markup percentage: 100
The item's retail price is: $10.00

    ---------------------------------------

    RUN 3: wholesale cost = 5.00, markup% = 50

Enter the item's wholesale cost: 5.00
Enter the item's markup percentage: 50
The item's retail price is: $7.50

    ---------------------------------------

    RUN 4: wholesale cost = 600.97, markup% = 37.98

Enter the item's wholesale cost: 600.97
Enter the item's markup percentage: 37.98
The item's retail price is: $829.22

*/
