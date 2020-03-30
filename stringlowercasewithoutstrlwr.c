#include<stdio.h>
void main(){
	char name[10];

	printf("Enter string to get in upper case\n");
	scanf("%s", name);

	for (int i = 0; name[i] != '\0'; ++i)
	{
		if (name[i] >= 'A' && name[i] <= 'Z')
		{
			name[i] = name[i] +32;
		}
		
	}

	printf("String in upper case is %s\n", name);
}