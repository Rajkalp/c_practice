#include<stdio.h>
void main(){
	int i, j, k;
	for (int i = 1; i <= 9; i++)
	{
		if ( i < 5)
		{
			for (int j = 1; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else{
			for (int k = 9; k >= i; k--)
			{
				printf("*");
			}
			printf("\n");
		}
		
	}
}