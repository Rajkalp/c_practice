#include<stdio.h>
void main(){
	int a[3][3], b[3][3], c[3][3];

	printf("Enter first matrix\n");
	for (int i = 0; i <= 2; ++i)
	{	
		for (int j = 0; j <= 2; ++j)
		{
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("Enter second matrix\n");
	for (int a = 0; a <= 2; ++a)
	{
		for (int c = 0; c <= 2; ++c)
		{
			printf("b[%d][%d]= ", a, c);
			scanf("%d", &b[a][c]);
		}
	}
	printf("\n");

	for (int w = 0; w <= 2; ++w)
	{
		for (int x = 0; x <= 2; ++x)
		{
			if (w == x)
			{
				c[w][x] = a[w][x] + b[w][x];
			}
			else{
				c[w][x] = 0;
			}
		}
	}

	printf("Diagonal Addition gives: \n");
	for (int y = 0; y <= 2; ++y)
	{
		for (int z = 0; z <= 2; ++z)
		{
			printf("c[%d][%d]= %d  ", y, z, c[y][z]);
		}
		printf("\n");
	}
}