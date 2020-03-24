#include<stdio.h>
void main() {
	int a[5], grt = 0;

	printf("Enter 5 Values to store in an array:\n");

	for (int j = 0; j <= 4; j++)
	{
		scanf("%d", &a[j]);
	}

	for (int i = 0; i <= 4; i++)
	{
		if (grt <= a[i])
		{
			grt = a[i];
		}
	}
	printf("Greatest Element entered is %d\n", grt);
}