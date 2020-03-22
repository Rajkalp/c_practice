#include<stdio.h>
void main(){
	float pi = 3.14, area;
	int r;
	printf("Enter radius of circle\n");
	scanf("%d", &r);
	area = pi * r * r;
	printf("Area of circle is %f\n", area);
}