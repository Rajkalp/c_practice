#include <stdio.h>
void main ()
{
	int num1, num2, sw;
	printf("Enter two numbers to Swap\n");
	printf("Enter number in a = ");
	scanf("%d", &num1);
	printf("Enter number in b = ");
	scanf("%d", &num2);
	sw = num2;
	num2 = num1;
	num1 = sw;
	printf("Value in a is %d and b is %d \n", num1, num2);
}