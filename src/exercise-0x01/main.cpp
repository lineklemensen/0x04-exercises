#include <iostream>
#include "calculateFactorial.h"

using namespace std;


int main() {
  int n;

  //Ask the user to enter a number for the factorial
  cout << "Please enter af number: ";
  cin >> n;

  //Calculate the factorial of the number
  int factorial = calculateFactorial(n);

  //Print the result
  cout << "The factoral of the number " << n << " is: " << factorial << endl;
  
  return 0;
}
