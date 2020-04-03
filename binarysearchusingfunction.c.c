#include<stdio.h>
int search(int array[5], int search);
void main(){	
	int x, array[5];
	int value;

	printf("Enter values to store in an array\n");
	for (int i = 0; i <= 4; ++i)
	{
		scanf("%d", &array[i]);
	}
	
	printf("Enter value to search in the array\n");
	scanf("%d", &value);

	x = search(array, value);
	(x == 0) ? printf("Element not found\n") : printf("Element found at index value %d\n", x);	
}

int search(int array[5], int value){
	int first = 0, last = 4, middle = (first + last) / 2;
		while(first <= last){
		if(array[middle] < value){
			first = middle + 1;
		}
		else if(array[middle] == value){
			return middle + 1; 
			break;
		}
		else{
			last = middle - 1;
		}
		middle = (first + last)/2;
	}

	if (first > last)
	{
		return 0; 
	}
}
