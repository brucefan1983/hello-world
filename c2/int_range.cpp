#include <iostream>
#include <limits>

int main()
{
  std::cout << "bool: " << sizeof(bool) << " B, from "
            << std::numeric_limits<bool>::min() << " to "
            << std::numeric_limits<bool>::max() << std::endl;
  std::cout << "char: " << sizeof(char) << " B, from "
            << std::numeric_limits<char>::min() << " to "
            << std::numeric_limits<char>::max() << std::endl;
  std::cout << "int: " << sizeof(int) << " B, from "
            << std::numeric_limits<int>::min() << " to "
            << std::numeric_limits<int>::max() << std::endl;
  return 0;
}