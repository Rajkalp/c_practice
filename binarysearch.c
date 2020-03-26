#include<stdio.h>
void main(){
	int a[5],search, first = 0, last = 4, middle = (first + last)/2;

	printf("Enter values to store in an array\n");
	for (int i = 0; i <= 4; ++i)
	{
		scanf("%d", &a[i]);
	}
	
	printf("Enter value to search in the array\n");
	scanf("%d", &search);

	while(first <= last){
		if(a[middle] < search){
			first = middle + 1;
		}
		else if(a[middle] == search){
			printf("Element found at %d ", middle + 1);
			printf("\n");
			break;
		}
		else{
			last = middle - 1;
		}
		middle = (first + last)/2;
	}

	if (first > last)
	{
		printf("Element not found\n");
	}

}