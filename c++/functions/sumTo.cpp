#include <iostream>

void sumTo(int x)
{
	for (int count = 0; count < x + 1; ++count)
	{
		std::cout << "The number is " << count << '\n';
	}

}

int main()
{
	sumTo(10);

	return 0;
}
