// Display Array values on screen
#include<stdio.h>
void main() {
	int a[5];
	printf("Enter 5 Values to store in an array:\n");
	for (int j = 0; j <= 4; j++)
	{
		scanf("%d", &a[j]);
	}

	printf("Values you entered are: ");
	for (int i = 0; i <= 4; i++)
	{
		printf("%d,", a[i]);
	}
}