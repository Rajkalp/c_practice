#include<stdio.h>
void main(){
	int a[3][3], b[3][3];

	printf("Enter first matrix\n");
	for (int i = 0; i <= 2; ++i)
	{	
		for (int j = 0; j <= 2; ++j)
		{
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");


	for (int x = 0; x <= 2; ++x)
	{
		for (int w = 0; w <= 2; ++w)
		{
			b[x][w] = a[w][x];
		}
	}

	printf("Transpose of the matrix is\n");
	for (int y = 0; y <= 2; ++y)
	{
		for (int z = 0; z <= 2; ++z)
		{
			printf("b[%d][%d]= %d  ", y, z, b[y][z]);
		}
		printf("\n");
	}
}