// partners: Victoria Velasquez, Matthew Louchart

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
  
}
