// Display Array values on screen
#include<stdio.h>
void main() {
	int a[5], sum = 0;
	printf("Enter 5 Values to store in an array:\n");
	for (int j = 0; j <= 4; j++)
	{
		scanf("%d", &a[j]);
	}

	for (int i = 0; i <= 4; i++)
	{
		sum = sum + a[i];
	}
	printf("Sum of Entered values is: %d \n", sum);
}