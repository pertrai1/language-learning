#include <stdio.h>

void doit(int x)
{
	x = 5;
}

int main()
{
	int z = 27;
	doit(z);
	printf("z is not %d\n", z);
	
	return 0;
}