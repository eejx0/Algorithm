#include<stdio.h>

int main()
{
	int sum, sum1 = 0, num1, num2;
	int object;
	
	scanf("%d %d", &sum, &num1);
	
	for(int i = 1; i <= num1 ; i++)
	{
		scanf("%d %d", &object, &num2);
		sum1 += object*num2;
	}
	if(sum == sum1)
	{
		printf("Yes");
	}
	else
	printf("No");
	
} 