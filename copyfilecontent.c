#include<stdio.h>
void main(){
	FILE *p1, *p2;
	char ch;
	p1 = fopen("example2.c", "r");
	p2 = fopen("example3.c", "w+");

	if (p1 == NULL)
	{
		printf("File not found\n");
	}
	else{
		while(1){
			// ch == 0
			if (ch == EOF)
			{
				printf("Done!!\n");
				break;
			}
			ch = getc(p1);
			putc(ch, p2);
		}
	}
}