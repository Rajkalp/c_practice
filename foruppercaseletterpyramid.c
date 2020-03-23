#include<stdio.h>
void main(){
	int i, j;
	char a, b;
	for (int a = 'A'; a <= 'D'; a++)
	{
		for (int b = 'A'; b <= a; b++)
		{
			printf("%c", b);
		}
		printf("\n");
	}
}