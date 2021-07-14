//2D Array Traversal in C
#include<stdio.h>

int main()
{
	int i, j, m, n;
	int a[100][100];
	printf("Enter no of rows: ");
	scanf("%d",&m);
	printf("Enter no of columns: ");
	scanf("%d",&n);
	
	printf("Enter array elements:\n");
	for(i=0; i < m;  i++)
	{
		for(j=0; j < n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("The elements of array are:\n");
	for(i=0; i < m;  i++)
	{
		for(j=0; j < n; j++)
		{
			printf("%d\n",a[i][j]);
		}
	}
	
	return 0;
}
