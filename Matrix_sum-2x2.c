//Sum of 2 matrices in C for 2x2 matrix
#include<stdio.h>

int main()
{
	int i, j, m, n;
	int a[100][100], b[100][100], res[100][100];
	printf("Enter no of rows: ");
	scanf("%d",&m);
	printf("Enter no of columns: ");
	scanf("%d",&n);
	
	printf("Enter elements of 1st matrix:\n");  //1st matrix
	for(i=0; i < m;  i++)
	{
		for(j=0; j < n; j++)
		{
			printf("a%d%d: ", i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("Enter elements of 2nd matrix:\n");  //2nd matrix
	for(i=0; i < m;  i++)
	{
		for(j=0; j < n; j++)
		{
			printf("b%d%d: ", i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0; i < m;  i++)
	{
		for(j=0; j < n; j++)
		{
			res[i][j] = a[i][j] + b[i][j];  //Resultant Matrix
		}
	}
	
	printf("The sum of the 2 matrices:\n");
	for(i=0; i < m;  i++)
	{
		for(j=0; j < n; j++)
		{
			printf("%d\t",res[i][j]);
			if(j==1)
			{
				printf("\n");
			}
		}
	}
	
	return 0;
}
