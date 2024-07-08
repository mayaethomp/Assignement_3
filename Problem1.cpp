// Maya Thompson
// CS 1, Section #0107
// Assignment #3, Problem #1
// Summary: This program calculates how much a person would earn of a period of user's inputted days if one penny is earned the first day and doubles each days, outputs a table displaying pennies earned each day, and outputs the total salary earned 

#include <iostream>
#include <iomanip>

using namespace std; 

int main() {

// Declare and initialize variables
int days = 0;
int long long pennies = 1;
double salary = 0;

// Prompt the user for number of days worked
  cout << "Enter the number of days someone has worked:" << endl;
  cin >> days;

// If user input is < 1 or > 50, prompt the user for a number of days again using a while loop and nested if loop
  while (days < 1 || days > 50) {
    if (days < 1) {
      cout << "You entered a number of days less than 1. Please enter the number of days again:";
    } else if (days > 50) {
      cout << "You entered a number of days greater than 1. Please enter the number of days again:";
    }
    cin >> days;
  }



// Output the header row for the table 
  cout << "Day Number    Pennies Earned for the Day" << endl;
  cout << "----------------------------------------" << endl;

// Use a for loop to calculate the number of pennies earned per day
  for (int day = 1; day <= days; day++) {
    cout << setw(10) << day << setw(30) << pennies << endl;
    pennies *= 2;  // pennies = pennies * 2
  }

// Calculate the salary based on the total number of pennies earned for the inputted number of days
  salary = (pennies * 0.01) - 0.01;

// Output the total pay earned over the number of days worked to the screen
  cout << "The amount of salary this person has earned over " << setprecision(2) << fixed << days << " days is $" << salary << endl;


  return 0;

}
