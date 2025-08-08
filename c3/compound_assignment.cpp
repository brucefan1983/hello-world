#include <iostream>

int main()
{
  double x = 1.2;
  double y = 3.0;

  x += y;
  std::cout << x << std::endl;         // 4.2
  x -= y;
  std::cout << x << std::endl;         // 1.2

  return 0;
}