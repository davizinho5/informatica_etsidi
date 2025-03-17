#include <stdio.h>

int main()
{
	int i;
	int fibonacci[20]={1,1};
	
	printf("%i %i ", fibonacci[0], fibonacci[1]);
	for(i=2; i<20; i++)
	{
		fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
		printf("%i ", fibonacci[i]);
	}
	return 0;
}
