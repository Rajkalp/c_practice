#include<stdio.h>
void main() {
	int a[5], sml;

	printf("Enter 5 Values to store in an array:\n");

	for (int j = 0; j <= 4; j++)
	{
		scanf("%d", &a[j]);
	}

	sml = a[1];
	
	for (int i = 1; i <= 4; i++)
	{
		if (sml >= a[i])
		{
			sml = a[i];
		}
	}
	printf("Greatest Element entered is %d\n", sml);
}