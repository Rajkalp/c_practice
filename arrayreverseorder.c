#include<stdio.h>
void main() {
	int a[5];
	
	printf("Enter value to save it in an array \n");
	for (int i = 0; i <= 4; ++i)
	{
		scanf("%d", &a[i]);
	}

	printf("Reverse order of that array is: ");
	for (int j = 4; j >= 0; --j)
	{
		printf("%d ", a[j]);
	}
}