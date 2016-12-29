#include <iostream>

void foo(int *ptr)
{
	*ptr = 6;
}

int main()
{
	int value = 5;

	std::cout << "The value = " << value << '\n';
	foo(&value); // pass by address
	std::cout << "The value = " << value << '\n';
	return 0;
}
