#include <iostream>

void foo(int &value)
{
	value = 6;
}

int main()
{
	int value = 5;

	// this will point to the value that is bound inside of this function
	std::cout << "value = " << value << '\n';
	// value will be passed into foo which has a value in the scope of foo which is 6
	foo(value);
	std::cout << "value = " << value << '\n';
	return 0;
}
