#include <iostream>

int main()
{
	std::cout << "Enter a divisor: ";
	int x{};
	std::cin >> x;

	std::cout << "12 / " << x << " = " << 12 / x << '\n';

	return 0;
}
