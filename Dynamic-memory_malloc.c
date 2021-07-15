//Dynamic memory allocation using malloc() in C
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i;
	printf("Enter number of integers: ");
	scanf("%d",&n);
	int *ptr = (int *)malloc(n*sizeof(int));  //memory allocation for n integers
	if(ptr==NULL)
	{
		printf("Memory not available.\n");
		exit(1);
	}
	
	printf("Enter the integers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", (ptr+i));
	}
	printf("The integers are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n", *(ptr+i));
	}
	return 0;
}
