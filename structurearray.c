#include<stdio.h>
struct stud{
	int id;
	char name[10];
	char add[10];
};
void main(){
	struct stud s[5];

	for (int i = 0; i <= 4; ++i)
	{
		printf("Enter id of student\n");
		scanf("%d", &s[i].id);
		printf("Enter name of student\n");
		scanf("%s", &s[i].name);
		printf("Enter address of student\n");
		scanf("%s", &s[i].add);
		printf("\n");
	}
	
	for (int i = 0; i <= 4; ++i)
	{
		printf("Details of %d student: \n", i+1);
		printf("Id of student is %d\n", s[i].id);
		printf("Name of student is %s\n", s[i].name);
		printf("Address of student is %s\n", s[i].add);
		printf("\n");
	}

}