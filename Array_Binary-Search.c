//Searching an element in Array (Binary Search)
#include<stdio.h>
	
int main()
{
	int i, l, r, mid, n, data;
	int a[100];
	printf("Enter size of array: ");
	scanf("%d",&n);
	
	printf("Enter elements of the array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("The elements of the array are: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	printf("Enter the data to search: ");
	scanf("%d",&data);
	
	l=0, r=n-1;
	while(l <= r)
	{
		mid = (l+r)/2;
		if(data==a[mid])
		{
			printf("\nElement found at index %d and position %d", mid, mid+1);
			break;
		}
		else if(data < a[mid])
		{
			r = mid-1;
		}
		else
		{
			l = mid+1;
		}
	}
	if(l>r)
	{
		printf("%d not found\n",data);
	}
	return 0;
}

