#include<stdio.h>
void main() {
	int a[5], temp;

	printf("Enter 5 elements to store in an array\n");
	for (int c = 0; c <= 4; ++c)
	{
		scanf("%d", &a[c]);
	}

	for (int i = 0; i <= 4; ++i) // outer
	{
		for (int j = i+1; j <= 4; ++j) // inner
		{
			if (a[i] > a[j]) // 12 < 1
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("Sorted array is\n");
	for (int b = 0; b <= 4; ++b)
	{
		printf("%d, ", a[b]);
	}
}