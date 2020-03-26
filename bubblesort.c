#include<stdio.h>
void main() {
	int a[6], temp;

	printf("Enter 6 elements to sort in ascending order\n");
	for (int x = 0; x <= 5; ++x)
	{
		scanf("%d", &a[x]);
	}

	for (int j = 0; j <= 5; ++j)
	{
		for (int i = 0; i < 5-j; ++i)
		{
			if (a[i] > a[i+1])
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
	
	printf("Ascending order is : ");
	for (int y = 0; y <= 5; ++y)
	{
		printf("%d, ", a[y]);
	}
	printf("\n");
}