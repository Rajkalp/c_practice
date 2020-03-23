#include<stdio.h>
void main(){
	int num, rem;
	printf("Enter a value to check its divisiblity with 4: ");
	scanf("%d", &num);
	rem = num % 4;
	if( rem == 0){
		printf("It is Divisible by 4\n");
	}else{
		printf("It's not Divisible\n");
	}
}