//Program to read marks of 5 students and calculate sum and avg using Arrays
#include<stdio.h>

int main()
{
	int i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	int marks[n];
	float sum=0;
	float avg;
	printf("Enter marks of %d students:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<n;i++)
	{
		sum = sum + marks[i];
	}
	avg= sum/n ;
	printf("Sum is: %f\n", sum);
	printf("Average is: %f\n", avg);
	return 0;
}
