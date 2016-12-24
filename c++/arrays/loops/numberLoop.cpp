#include <iostream>

int main()
{
	int x;
	do
	{
		std::cout << "Enter a number between 1 and 9: ";
		std::cin >> x;
		if (std::cin.fail())
		{
			std::cin.clear(); // reset any error flags
			std::cin.ignore(32767, '\n'); // ignore any character in the input buffer
		}

	} while (x < 1 || x > 9);


	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	const int arrayLength = sizeof(array) / sizeof(array[0]);

	for (int index = 0; index < arrayLength; ++index)
		std::cout << array[index] << " ";

	std::cout << "\n";

	for (int index = 0; index < arrayLength; ++index) {
		if (array[index] == x) {
			std::cout << "The index of the array is " << index << "\n";
			break;
		}
	}

	return 0;
}
