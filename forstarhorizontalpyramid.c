#include<stdio.h>
void main (){
	for (int i = 1; i <= 4; ++i)
	{
		for (int sp = 1; sp < 39-i; ++sp) // space
		{
			printf(" ");
		}

		for (int str = 1; str <= i; ++str) // stars
		{
			printf("* ");
		}
		printf("\n");
	}
}