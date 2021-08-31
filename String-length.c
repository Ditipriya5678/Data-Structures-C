//Finding String Length using strlen()

#include<stdio.h>
#include<string.h>

int main()
{
	int count;
	char name[100];
	printf("Enter name: ");
	gets(name);
	count = strlen(name);
	printf("String length is : %d",count);
	
	return 0;
}


//Finding String Length without using strlen()

#include<stdio.h>
#include<string.h>

int main()
{
	int i, count=0;
	char name[100];
	printf("Enter name: ");
	gets(name);
	for(i=0; name[i]!='\0';i++)
	{
		count++;
	}
	printf("String length is: %d\n",count);
	
	return 0;
}

