//header file

#ifndef _MATH_UTILS_
#define _MATH_UTILS_
#include <math.h>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

class Math{
public:
    bool IsSquare(int num);
    int GetDigit(int num, int place);
    bool EqualParity(int x, int y);
    bool EqualParity(std::vector<int> nums);
    int Quadratic(int x1, int x2, int a, int b, int c);
};
#endif  // _MATH_UTILS_
