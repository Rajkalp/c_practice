#include<stdio.h>
void main(){
	int S, n;
	printf("Enter a natural number to get total of all numbers from that number: ");
	scanf("%d", &n);
	S = (n * (n + 1))/2;
	printf("Sum of the numbers is %d\n", S);
}