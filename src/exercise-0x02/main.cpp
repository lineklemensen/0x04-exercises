#include <iostream>
#include "circleArea.h"
#include "rectangleArea.h"
#include "triangleArea.h"

using namespace std;

int main() {
  //Testing the area function without user input
  cout << "Area of the circle with input (radius = 7)" << area(7) << endl;
  cout << "Area of the rectangle with inout (width = 5, height = 10)" << area(5, 10) << endl;
  cout << "Area of the triangle with inout (a = 3, b = 4, c = 5)" << area(3, 4, 5) << endl;
  
  return 0;
}
