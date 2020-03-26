#include<stdio.h>
void main () {

	int a[5]; // Elements
	int search, loc = 0, f = 0; // searching element 

	printf("Enter array of Elements\n");

	for (int i = 0; i <= 4; ++i)
	{
		scanf("%d", &a[i]); //  store the values in array
	}

	printf("Enter Value to search in array\n");

	scanf("%d", &search);

	for (int j = 0; j <= 4; ++j)
	{
		if (search == a[j])
		{
			loc = j+1;
			f = 1;
		}
	}
	
	if (f == 0)
	{
		printf("Element not found\n");
	}
	else{
		printf("Element found at %d\n", loc);
	}
}