#include <iostream>
#include <string>

void sortArray(std::string *array, int length)
{
    // Step through each element of the array
    for (int startIndex = 0; startIndex < length; ++startIndex)
    {
        // smallestIndex is the index of the smallest element we have encountered so far
        int smallestIndex = startIndex;

        // Look for smallest element remaining in the array (starting at startIndex)
        for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
        {

            // If the current element is smaller than our previously found smallest
            if (array[currentIndex] < array[smallestIndex])
            {
                // This is the new smallest number for this iteration
                smallestIndex = currentIndex;
            }
        }

        // Swap our start element with out smallest element
        std::swap(array[startIndex], array[smallestIndex]);
    }
}

int main()
{
	// setting up the namespace to use std library
	using namespace std;

	// ask the user to input how many names they want to enter
	cout << "How many names do you wish to enter?: ";
	// declare a null variable type int with identifier being names
	int names;
	// take in the value of input from user and store in names
	cin >> names;
	// this is a pointer to string with new string
	string *allNames = new string[names];

	for (int count = 0; count < names; ++count)
	{
		cout << "Enter name #" << count + 1  << ": ";
		cin >> allNames[count];
	}

	// Sort the array
	sortArray(allNames, names);

	cout << "\nHere is your sorted list:\n";

	// Print the sorted array
	for (int i = 0; i < names; ++i)
	{
		cout << "Name #" << i + 1 << ": " << allNames[i] << '\n';
	}

	delete[] allNames; // don't forget to use array delete
	allNames = nullptr; // use 0 is not c++11

	return 0;
}
