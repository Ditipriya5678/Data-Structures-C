//Searching an element in Array (Linear Search)
#include<stdio.h>

int main()
{
	int i,size,count_even=0, count_odd=0;
	int a[50];
	printf("Enter size of array: ");
	scanf("%d",&size);
	
	printf("Enter elements of the array: \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("The elements of the array are: \n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		if(a[i] % 2 == 0)
		{
			count_even = count_even + 1;
		}
		else
		{
			count_odd = count_odd + 1;
		}
	}
	
	printf("No of even elements: %d\n", count_even);
	printf("No of odd elements: %d\n", count_odd);
	return 0;
}
