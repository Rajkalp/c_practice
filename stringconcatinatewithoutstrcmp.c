#include<stdio.h>
void main(){
	char name1[20];
	char name2[20];
	int j, i;

	printf("Enter first strings to concatinate\n");
	scanf("%s", name1);
	printf("Enter second string to concatinate\n");
	scanf("%s", name2);

	for (i = 0; name1[i] != '\0'; ++i)
	{}
	
	for (j = 0; name2[j] != '\0'; ++j)
	{
		name1[i] = name2[j];
		i++;
	}

	printf("String is %s\n", name1);
}