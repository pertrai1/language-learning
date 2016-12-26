#include <iostream>

void doSomething(int *ptr)
{
	if (ptr)
	{
		std::cout << "You passed in " << *ptr << '\n';
	}
	else
	{
		std::cout << "You passed in a null pointer\n";
	}
}

int main()
{
	doSomething(nullptr);

	return 0;
}
