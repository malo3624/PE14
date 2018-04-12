//header file

#ifndef _MATH_UTILS_
#define _MATH_UTILS_

#include <vector>

class Math{
public:
    static bool IsSquare(int num);
    static int GetDigit(int num, int place);
    static bool EqualParity(int x, int y);
    static bool EqualParity(std::vector<int> nums);
    static double solveQuadratic(int a, int b, int c);
};
#endif  // _MATH_UTILS_
