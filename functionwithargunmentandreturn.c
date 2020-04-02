#include<stdio.h>
int div4(int num);
void main(){
	int value, num, sol;
	printf("Enter a number to check its divisiblity with 4\n");
	scanf("%d", &num);
	sol = div4(num);
	if( sol == 0){
		printf("It is Divisible by 4\n");
	}else{
		printf("It's not Divisible\n");
	}
}

int div4(int num){
	int rem;
	rem = num % 4;
	return rem;
}
