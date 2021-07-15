//Passing structures to function in C
#include<stdio.h>
#include<stdlib.h>

struct student
{
	char name[100];
	int age;
	int roll_no;
	float marks;
};

void print(char name[], int age, int roll_no, float marks)
{
	printf("Displaying Information:\n");
	printf("%s\n%d\n%d\n%.2f\n",name, age, roll_no, marks);
}

int main()
{
	struct student s1;
	printf("Enter name: ");
	scanf("%[^\n]s", s1.name);
	
	printf("\nEnter age: ");
	scanf("%d", &s1.age);
	
	printf("\nEnter roll no: ");
	scanf("%d", &s1.roll_no);
	
	printf("\nEnter marks: ");
	scanf("%f", &s1.marks);

	print(s1.name, s1.age, s1.roll_no, s1.marks);
	return 0;
}
