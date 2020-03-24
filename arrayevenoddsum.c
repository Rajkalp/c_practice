#include<stdio.h>
void main() {
	int a[10], even = 0, odd = 0;

	printf("Enter 5 Values to store in an array:\n");

	for (int j = 0; j <= 9; j++)
	{
		scanf("%d", &a[j]);
	}

	for (int i = 0; i <= 9; i++)
	{
		if ( a[i]%2 == 0)
		{
			even = even + a[i];
		}
		else{
			odd = odd + a[i];
		}
	}

	printf("Sum of all even numbers is %d and odd numbers is %d\n", even, odd);
}