//Comparing 2 Strings using strcmp()

#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100];
	char s2[100];
	int value;
	printf("Enter 1st string: ");
	gets(s1);
	printf("Enter 2nd string: ");
	gets(s2);
	value = strcmp(s1,s2);
	if(value==0)
	{
		printf("Strings are same\n");
	}
	else
	{
		printf("Strings are different\n");
	}
	printf("%d\n",value);
	
	return 0;
}



//Comparing 2 Strings without using strcmp()

#include<stdio.h>
#include<string.h>

int main()
{
	int i, flag=0;
	char s1[100];
	char s2[100];
	printf("Enter 1st string: ");
	gets(s1);
	printf("Enter 2nd string: ");
	gets(s2);
	
	for(i=0; s1[i]!='\0' || s2[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Strings are not equal\n");
	}
	else
	{
		printf("Strings are equal\n");
	}
	
	
	return 0;
}




