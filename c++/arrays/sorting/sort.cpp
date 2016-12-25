#include <algorithm>
#include <iostream>

int main()
{
	const int length = 5;
	int array[length] = { 30, 50, 20, 10, 40 };

	// Step through each element of the array
	for (int startIndex = 0; startIndex < length; ++startIndex)
	{
		std::cout << "The start: " << array[startIndex] << "\n";
		// smalledIndex is the index of the smallest element we've encountered so far
		int smallestIndex = startIndex;

		// Look for smallest element remaining in the array (starting at smartIndex + 1)
		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			std::cout << "Smallest element: " << array[currentIndex] << "\n";
			// If the current element is smaller than our previously found smallest
			if (array[currentIndex] < array[smallestIndex])
			{
				smallestIndex = currentIndex;
				std::cout << "Small now: " << array[smallestIndex] << "\n";
			}
		}

		// // Swap our start element with our smallest element
		std::swap(array[startIndex], array[smallestIndex]);
		std::cout << "Start index: " << array[startIndex] << "\n";
	}

	// Now print our sorted array as proof it works
	for (int index = 0; index < length; ++index)
	{
		std::cout << array[index] << ' ';
	}

	std::cout << '\n';

	return 0;
}
