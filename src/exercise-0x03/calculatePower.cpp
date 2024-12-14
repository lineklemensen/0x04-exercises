#include "calculatePower.h"
#include <cmath>

double calculatePower(double voltage, double resistance) {
    return pow(voltage, 2) / resistance;
}