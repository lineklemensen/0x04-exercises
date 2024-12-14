#include <iostream>
#include "calculatePower.h"

using namespace std;

int main() {
  //Variables containing the values of the circuit
  double v, r;

  //Asking the user to input values for the circuit elements
  cout << "Please input the values of the circuit elements" << endl;
  cout << "Voltage V=[V]: ";
  cin >> v;
  cout << "Resistance R=[Ohm]: ";
  cin >> r;

  //Variable containing the result, i.e. the power dissipated in the resistor
  double power = calculatePower(v, r);

  //Outputting the result of the calculation to the user
  cout << "The power dissipated in the resistor is " << power << " watts [W]" << endl;

  return 0;
}
