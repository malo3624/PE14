// partners: Victoria Velasquez, Matthew Louchart, Connor Dowd

#include <math_utils.h>
#include <math.h>

bool Math::IsSquare(int num)
{
  int x = sqrt(num);
  if(x == static_cast<int>(x))
    return true;
  else
    return false;
}

int Math::GetDigit(int num, int place)
{

}

bool Math::EqualParity(int x, int y)
{
  if(x % 2 && y % 2)
    return true;
  else if (x % 2 != 0 && x % 2 != 0)
    return true;
  else
    return false;

}

bool Math::EqualParity(std::vector nums)
{
    return false;
}
