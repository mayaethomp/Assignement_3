#include <iostream>
using namespace std;

int main ()
{

 int total = 0;
 
 for (int count = 0; count <= 100; count++)
{
 total += count;
 }
 cout << "The sum of the numbers 1-100 is ";
 cout << total << endl;
 return 0;
}