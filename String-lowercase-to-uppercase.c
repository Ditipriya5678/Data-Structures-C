//Convert string from Lowercase to Uppercase using strupr()

#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char s1[100];
	printf("Enter string: ");
	gets(s1);
	
	strupr(s1);
	printf("Uppercase to lowercase conversion: %s",s1);
	
	return 0;
}



//Convert string from Lowercase to Uppercase without using strupr()

#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char s1[100];
	printf("Enter string: ");
	gets(s1);
	
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='a' && s1[i]<='z')
		{
			s1[i] = s1[i] - 32;
		}
	}
	printf("Lowercase to Uppercase conversion: %s",s1);
	
	return 0;
}
