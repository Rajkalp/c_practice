#include<stdio.h>
void main(){
	char name[100];
	int count = 0;
	printf("Enter a name to get its length\n");
	scanf("%s", name);

	for (int i = 0; name[i] != '\0'; ++i)
	{
		count++;
	}

	printf("String length is %d\n", count);
}