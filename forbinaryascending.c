#include<stdio.h>
void main(){
	int i, j;
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if( j%2 == 0){
				printf("0");
			}
			else{
				printf("1");
			}
		}
		printf("\n");
	}
}