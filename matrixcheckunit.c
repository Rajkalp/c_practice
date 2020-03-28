#include<stdio.h>
void main(){
	int a[3][3], flag = 0, flag_diagonal = 0;

	printf("Enter first matrix\n");
	for (int i = 0; i <= 2; ++i)
	{	
		for (int j = 0; j <= 2; ++j)
		{
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	for (int y = 0; y <= 2; ++y)
	{
		for (int z = 0; z <= 2; ++z)
		{
			if ( y != z && a[y][z] == 0)
			{
				flag = ++ flag;
			}
			else if ( y == z && a[y][z] == 1 )
			{
				flag_diagonal =  ++ flag_diagonal;
			}
		}
	}

	if ( flag == 6 && flag_diagonal == 3)
	{
		printf("Its a Unit matrix\n");
	}
	else
	{
		printf("Its not a Unit matrix\n");
	}
}