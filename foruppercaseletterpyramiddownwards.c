#include<stdio.h>
void main(){
	char a, b;
	for (int a = 'D'; a >= 'A'; a--)
	{
		for (int b = 'A'; b <= a; b++)
		{
			printf("%c", b);
		}
		printf("\n");
	}
}