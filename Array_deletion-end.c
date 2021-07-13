//Deletion at the end of the Array
#include<stdio.h>

int main()
{
	int i, size, a[50];
	printf("Enter size of array: ");
	scanf("%d",&size);
	
	printf("Enter elements of array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("The elements are:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
	
	size--;
	printf("The elements of the array after deletion at end are:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}

	return 0;
}
