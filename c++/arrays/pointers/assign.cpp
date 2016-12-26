#include <iostream>

int main()
{
	using namespace std;

	int array[5] = { 9, 7, 5, 3, 1 };

	cout << *array; // will print 9

	cout << '\n';

	int *ptr = array;
	cout << *ptr << '\n';

	return 0;
}
