#include<stdio.h>
void main(){
	int l, b, A;
	printf("Enter values to get Area of a Rectangle\n");
	printf("Length of Rectangle: ");
	scanf("%d", &l);
	printf("Height of Rectangle: ");
	scanf("%d", &b);
	A = l * b;
	printf("Area of Rectangle is %d\n", A);
}