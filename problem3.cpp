#include <iostream>
using namespace std;

int main () {

  int numCount, total;
  double average;

  cout << "How many numbers do you want to average? ";
  cin >> numCount;

  for (int count = 1; count <= numCount; count++) { // Added a = to <=
    int num;
    cout << "Enter a number: ";
    cin >> num;
    total += num;
// Deleted count++;
  }
  average = total / numCount;

  cout << "The average is " << average << endl; // Added a missing " after is

  return 0;
}