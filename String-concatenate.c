//Concatenating 2 Strings using strcat()

#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100];
	char s2[100];
	printf("Enter 1st string: ");
	gets(s1);
	printf("Enter 2nd string: ");
	gets(s2);
	strcat(s1,s2);
	printf("Concatenated string is: %s",s1);
	
	return 0;
}


//Concatenating 2 Strings without using strcat()

#include<stdio.h>
#include<string.h>

int main()
{
	int len1,len2;
	int i;
	char s1[100];
	char s2[100];
	printf("Enter 1st string: ");
	gets(s1);
	printf("Enter 2nd string: ");
	gets(s2);
	
	len1=strlen(s1);
	len2=strlen(s2);
	
	for(i=0;i<=len2;i++)
	{
		s1[len1+i] = s2[i];
	}
	printf("Concatenated string is: %s\n",s1);
	
	return 0;
}
