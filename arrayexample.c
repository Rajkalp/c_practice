// Display Array values on screen
#include<stdio.h>
void main() {
	int a[3];
	a[0] = 23;
	a[1] = 32;
	a[2] = 12;
	a[3] = 45;

	for (int i = 0; i <= 3; ++i)
	{
		printf("%d\n", a[i]);
	}
}