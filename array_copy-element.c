/*
Write a program in C to copy the elements of one array into another
array.

Test Data:
Input the number of elements to be stored in the array :3
Input 3 elements in the array:
element - 0 : 15
element - 1 : 10
element - 2 : 12

Expected Output:
The elements stored in the first array are:
15 10 12
The elements copied into the second array are:
15 10 12
*/

#include<stdio.h>

int main()
{
	int i,n,;
	printf("Input no of elements to be stored in the array: ");
	scanf("%d",&n);
	int a[n], b[n];
	
	printf("Input %d elements in the array:\n");
	for(i=0;i<n;i++)
	{
		printf("Element-%d:  ",i);
		scanf("%d",&a[i]); //input array elements
	}
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		b[i] = a[i];
	}

	printf("The elements stored in the first array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n");
	printf("The elements copied into the second array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	
	
	return 0;
}
