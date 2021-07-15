//Dynamic memory allocation using free() in C
#include<stdio.h>
#include<stdlib.h>

int *input()
{
	int i;
	int *ptr;
	ptr = (int *)malloc(5*sizeof(int));
	printf("Enter 5 numbers:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d", (ptr+i));
	}
	return ptr;
}

int main()
{
	int i,sum=0;
	int *ptr = input();
	for(i=0;i<5;i++)
	{
		sum = sum + *(ptr+i);
	}
	printf("\nSum is: %d",sum);
	free(ptr);
	ptr = NULL;
	return 0;
}
