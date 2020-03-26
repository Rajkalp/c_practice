#include<stdio.h>
void main(){
	int a[2][2], b[2][2], c[2][2];

	printf("Enter first matrix\n");
	for (int i = 0; i <= 1; ++i)
	{	
		for (int j = 0; j <= 1; ++j)
		{
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("Enter second matrix\n");
	for (int a = 0; a <= 1; ++a)
	{
		for (int c = 0; c <= 1; ++c)
		{
			printf("b[%d][%d]= ", a, c);
			scanf("%d", &b[a][c]);
		}
	}
	printf("\n");

	for (int w = 0; w <= 1; ++w)
	{
		for (int x = 0; x <= 1; ++x)
		{
			c[w][x] = a[w][x] + b[w][x];
		}
	}

	for (int y = 0; y <= 1; ++y)
	{
		for (int z = 0; z <= 1; ++z)
		{
			printf("c[%d][%d]= %d  ", y, z, c[y][z]);
		}
		printf("\n");
	}
}