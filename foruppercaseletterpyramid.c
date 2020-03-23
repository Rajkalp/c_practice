#include<stdio.h>
void main(){
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