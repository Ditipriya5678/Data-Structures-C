//Deletion at specified position of the Array
#include<stdio.h>

int main()
{
	int i, size, a[50], pos;
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

	printf("Enter the position from where the element will be deleted:\n");
	scanf("%d",&pos);
	if(pos<=0 || pos > size)
	{
		printf("Invalid position!");
	}
	else
	{
		for(i=pos-1; i < size-1; i++)
		{
			a[i]=a[i+1];
		}
		size--;
		printf("The elements of the array after deletion are:\n");
		for(i=0;i<size;i++)
		{
			printf("%d\n",a[i]);
		}
	}

	return 0;
}
