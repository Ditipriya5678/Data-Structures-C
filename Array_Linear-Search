//Searching an element in Array (Linear Search)
#include<stdio.h>

int main()
{
	int i,size,data, found=0;
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
	
	printf("Enter the data to search: ");
	scanf("%d",&data);
	for(i=0;i<size;i++)
	{
		if(a[i]==data)
		{
			printf("Element found at index %d\n",i);
			found=1;
			break;
		}
	}
	if(found==0)
	{
		printf("Element not found! \n");
	}
	return 0;
}
