#include<stdio.h>
void main(){
	char name1[10];
	char name2[10];
	int j = 0, i, k;

	printf("Enter first strings in name1\n");
	scanf("%s", name1);
	printf("Enter second string in name2\n");
	scanf("%s", name2);

	for (i = 0; name1[i] != '\0'; ++i)
	{}

	for (int j = 0; j <= i-1; ++j)
	{
		if (name1[j] != name2[j])
		{
			k++;
		}
	}

	if (k == 0)
	{
		printf("Strings are same\n");
	}
	else
	{
		printf("Strings are not same\n");
	}	
}