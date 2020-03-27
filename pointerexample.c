#include<stdio.h>
void main(){
	int a = 2, *ptr;
	ptr = &a;

	printf("%u\n", a);
	printf("%u\n", &a);
	printf("%u\n", *&a);
	printf("%u\n", ptr);
	printf("%u\n", &ptr);
	printf("%u\n", *ptr);
}