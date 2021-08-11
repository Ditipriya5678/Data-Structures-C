/*
Write a program in C to print all unique elements in an array.

Test Data:
Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array:
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5

Expected Output:
The unique elements found in the array are:
3 5

*/

#include<stdio.h>

int main()
{
	int i, j, n, count=0;
	printf("Print all unique elements of an array:\n");
	printf("\n");
	printf("----------------------------------------\n");
	printf("\n");
	
	printf("Input no of elements to be stored in the array: ");
	scanf("%d",&n);
	int a[n], b[n];
	
	printf("Input %d elements in the array:\n");
	for(i=0;i<n;i++)
	{
		printf("Element-%d:  ",i);
		scanf("%d",&a[i]); //input array elements
	}
	
	for(i=0; i<n; i++)
    {
        count=1;
        if(a[i]!=-1)
		{
		    for(j=i+1; j<n; j++)
     
            {
        	   if(a[i]==a[j])
        	    {
			       count++;
			       a[j]=-1;
		       }
	       }
	       b[i]=count;
		}      
    }     
  printf("The unique elements found in the  array are:\n");
         
  for(i=0; i<n; i++)
    {
         if(a[i]!=-1)
        {
        	if(b[i]==1)
        	printf("%d ",a[i]);
 
		} 
         
    }    
    return 0;
	
}
