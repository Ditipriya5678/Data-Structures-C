//Array Initialisation, Array Traversal
#include<stdio.h>

int main()
{
	int i,n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]); //input array elements
	}
	printf("The elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]); //print array elements
	}
	return 0;
}
