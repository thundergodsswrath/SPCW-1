#include "calculator.h"
#include <stdexcept> // To use runtime_error

int Calculator::Add (double a, double b)
{
    return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
double Calculator::Div(double a, double b)
{
    if(b == 0){
       throw runtime_error("Math error: Attempted to divide by Zero\n");
    }
    return a / b;
}
