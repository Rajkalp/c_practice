#include<stdio.h>
void main(){
	char name1[10]; 
	char name2[10];

	printf("Enter a string in name1 array\n");
	scanf("%s", name1);

	for (int i = 0; i <=9; ++i)
	{
		name2[i] = name1[i];
	}

	printf("After copy, name2 is %s", name2);
	printf("\n");
}