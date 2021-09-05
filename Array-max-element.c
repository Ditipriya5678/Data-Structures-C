//Maximum element in array

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, t, n;
	scanf("%d",&t); //no of testcases
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n); //array size
		int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		
		//Storing largest element to arr[0]
		
		for(i=1;i<n;i++)
		{
			if(arr[0]<arr[i])
			{
				arr[0]=arr[i];
			}
		}
		printf("%d",arr[0]);
	}
}
