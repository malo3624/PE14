//header file

#ifndef _MATH_UTILS_
#define _MATH_UTILS_

#include <vector>

class Math{
public:
    bool IsSquare(int num);
    int GetDigit(int num, int place);
    bool EqualParity(int x, int y);
    bool EqualParity(std::vector<int> nums);

    double solveQuadratic(int a, int b, int c);
};
#endif  // _MATH_UTILS_
