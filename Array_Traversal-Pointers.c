//Array Initialisation using Pointers in C
#include<stdio.h>

int main()
{
	int i,size;
	int a[100];
	int *p = a;
	printf("Enter size of array: ");
	scanf("%d",&size);
	printf("Enter array elements:\n");
	for(i=0; i < size;  i++)
	{
		scanf("%d", (a+i));
	}
	
	printf("The elements of the array are:\n");
	for(i=0; i < size;  i++)
	{
		printf("%d\n", *(a+i));
	}
	return 0;
}
