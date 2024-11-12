#include <iostream>
#include "findMax.h"

using namespace std;

int main() {
  int a, b, c;

  cout << "Please enter 3 numbers: ";
  cin >> a >> b >> c;

  int max = findMax(a, b, c);

  cout << "The highest number is: " << max << endl;

  return 0;
}
