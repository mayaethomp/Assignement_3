// Maya Thompson
// CS 1, Section #0107
// Assignment #3, Problem #2
// Summary: This program allows a user to input a series of integers, then displays the smallest and largest integer inputted, as well as the average of all integers inputted. 

#include <iostream>
#include <cmath>

using namespace std;

int main () {

// Declare and initialize variables
  int num = 0;
  int set = 0;
  int smallest = 999999999;
  int largest = 0;
  double average = 0;
  double total = 0;



// Prompt the user to enter a number or -9999 to complete the set 
  cout << "Enter a number or -9999 to exit: " << endl;
  cin >> num;

// Repeatedly prompt the user to input a number until they input -9999
  while (num != -9999) {
    total += num;
    set++;

    // If -9999 is entered, stop program
      if (num == -9999) {
        break;
      }

     if (num < smallest) {
            smallest = num;
        }

        if (num > largest) {
            largest = num;
        }

    cout << "Enter a number or -9999 to exit " << endl;
    cin >> num; 
  }

// Output the smallest number in the set
  cout << "The smallest number in the set is " << smallest << endl;

// Output the largest number in the set
  cout << "The largest number in the set is " << largest << endl;

// Calculate the average of the set
  average = total / set;

// Output the average of the numbers in the set
  cout << "The average of the " << set << " numbers in the set is " << average << endl; 

  return 0;

}