#include <iostream>

int add(int x, int y)
{
	int sum = x + y;
	return sum;
}

int main()
{
	std::cout << add(5, 3);

	return 0;
}
