#include<stdio.h>
void main() {
	int a[5], cube = 1;

	printf("Enter 5 Values to store in an array:\n");

	for (int j = 0; j <= 4; j++)
	{
		scanf("%d", &a[j]);
	}

	for (int i = 0; i <= 4; i++)
	{
		cube = a[i] * a[i] * a[i];
		printf("Cube of %d is %d\n", a[i], cube);
		cube = 1;
	}
}