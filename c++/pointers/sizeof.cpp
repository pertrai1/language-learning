#include <iostream>

int main()
{
	char *chPtr; // chars are 1 byte
	int *iPtr; // int are 4 byte

	struct Something
	{
		int nX, nY, nZ;
	};

	Something *somethingPtr; // Something is probably 12 byyes

	std::cout << sizeof(chPtr) << '\n';
	std::cout << sizeof(iPtr) << '\n';
	std::cout << sizeof(somethingPtr) << '\n';
}
