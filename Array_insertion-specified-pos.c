//Insertion at specified position in Array
#include<stdio.h>

int main()
{
	int i, size, a[50], pos, num;
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
	
	printf("\nEnter the element to insert: ");
	scanf("%d",&num);
	printf("\nEnter the position for insertion: ");
	scanf("%d",&pos);
	
	if(pos<=0 || pos > size+1)
	{
		printf("Invalid position!");
	}
	else
	{
		for(i=size-1; i>=pos-1; i--)
		{
			a[i+1]=a[i];
		}
		a[pos-1]=num;
		size++;
		printf("The elements of array after insertion:\n");
		for(i=0;i<size;i++)
		{
			printf("%d\n",a[i]);
		}
	}
	
	return 0;
}
