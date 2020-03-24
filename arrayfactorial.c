#include<stdio.h>
void main() {
	int a[5], fact = 1;

	printf("Enter 5 Values to store in an array:\n");

	for (int j = 0; j <= 4; j++)
	{
		scanf("%d", &a[j]);
	}

	for (int i = 0; i <= 4; i++)
	{
		for (int k = a[i]; k >= 1; k--)
		{
			fact = fact * k;
		}

		printf("Factorial of %d is %d\n", a[i], fact);

		fact = 1;
	}
}