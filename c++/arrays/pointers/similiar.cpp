#include <iostream>

int main()
{
	int array[5] = { 9, 7, 5, 3, 1 };

	// print the value of the array variable
	std::cout << "The array has address: " << array << '\n';

	// print address of the array elements
	std::cout << "Elements 0 has address: " << &array[0] << '\n';

	// dereference the array to get the value of the first element
	std::cout << *array;

	std::cout << '\n';

	return 0;
}
