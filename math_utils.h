//header file

#ifndef _MATH_UTILS_
#define _MATH_UTILS_
#include <math.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

class Math{
public:
    bool IsSquare(int num);
    int GetDigit(int num, int place);
    bool EqualParity(int x, int y);
    bool EqualParity(std::vector nums);
    int Quadratic(int x, int a, int b, int c);
};
#endif  // _MATH_UTILS_
