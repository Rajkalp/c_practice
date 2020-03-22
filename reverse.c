#include <stdio.h>
void main ()
{
	int num, n1, n2, n3, rev;
	printf("Enter a 3 digit number to print in reverse order \n");
	scanf("%d", &num);
	n1 = num % 10;
	num = num / 10;
	n2 = num % 10;
	num = num / 10;
	n3 = num % 10;
	rev = n1 * 100 + n2 * 10 + n3 * 1;
	printf("Reverse order of the number is %d\n", rev);
}