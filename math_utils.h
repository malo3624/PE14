//header file

#ifndef _MATH_UTILS_
#define _MATH_UTILS_
#include <math.h>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

#include <vector>

class Math{
public:

    static bool IsSquare(int num);
    static int GetDigit(int num, int place);
    static bool EqualParity(int x, int y);
    static bool EqualParity(std::vector<int> nums);
    static double solveQuadratic(int a, int b, int c);

    bool IsSquare(int num);
    int GetDigit(int num, int place);
    bool EqualParity(int x, int y);
    bool EqualParity(std::vector<int> nums);
    int Quadratic(int x1, int x2, int a, int b, int c);

};
#endif  // _MATH_UTILS_
