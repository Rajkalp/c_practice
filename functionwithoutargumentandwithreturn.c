#include<stdio.h>
int div4();
void main(){	
	int sol;
	sol = div4();
	if( sol == 0){
		printf("It is Divisible by 4\n");
	}else{
		printf("It's not Divisible\n");
	}
}

int div4(){
	int value, num;
	printf("Enter a number to check its divisiblity with 4\n");
	scanf("%d", &num);
	int rem;
	rem = num % 4;
	return rem;
}
