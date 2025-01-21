#include <stdio.h>

int main(void)
{
	int i, j;
	scanf ("%d %d", &i, &j);
	
	printf("%.9f", (double)i/j);
	return 0;
}