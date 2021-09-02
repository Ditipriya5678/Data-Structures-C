//Reverse a String using strrev()

#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100];
	printf("Enter string: ");
	gets(s1);
	strrev(s1);
	printf("Reversed string is: %s\n",s1);
	
	return 0;
}



//Reverse a String without using strrev()

#include<stdio.h>
#include<string.h>

int main()
{
	int l,i;
	char ch;
	char s1[100];
	printf("Enter string: ");
	gets(s1);
	l = strlen(s1);
	
	for(i=0;i<l/2;i++)
	{
		ch = s1[i];
		s1[i] = s1[l-1-i];
		s1[l-1-i] = ch; 
	}
	printf("Reversed string is: %s\n",s1);
	
	return 0;
}



