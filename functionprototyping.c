#include<stdio.h>
void add(); // function prototyping


void main(){
	add();
	add();
	add();
}

void add(){
	int num1, num2, res;
	printf("Enter two values to add\n");
	scanf("%d %d", &num1, &num2);

	res = num1 + num2;

	printf("Total is %d\n", res);
}