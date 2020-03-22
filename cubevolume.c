#include<stdio.h>
void main(){
	int v, l;
	printf("Enter length of any one side of a cube\n");
	scanf("%d", &l);
	v = l * l * l;
	printf("Volume of cube is %d\n", v);
}