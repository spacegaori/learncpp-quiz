#include <iostream>

int main()
{
  std::cout << "How tall are you? (cm)\n";

  double height{};
  std::cin >> height;

  if (height > 140.0)
    return 1;
  else
    return 0;
}
