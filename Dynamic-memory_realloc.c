//Dynamic memory allocation using realloc() in C
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	int *ptr = (int *)malloc(2*sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory not available.\n");
	}
	
	printf("Enter 2 integers:\n");
	for(i=0;i<2;i++)
	{
		scanf("%d", (ptr+i));
	}
	
	ptr = (int *)realloc(ptr,4*sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory not available.\n");
	}
	
	printf("Enter 2 more integers:\n");
	for(i=2;i<4;i++)
	{
		scanf("%d", (ptr+i));
	}
	
	printf("The integers are:\n");
	for(i=0;i<4;i++)
	{
		printf("%d\n", *(ptr+i));
	}
	
}
