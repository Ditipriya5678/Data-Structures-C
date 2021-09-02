//Convert string from Uppercase to Lowercase using strlwr()

#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100];
	printf("Enter string: ");
	gets(s1);
	strlwr(s1);
	printf("Uppercase to lowercase string is: %s",s1);
	
	return 0;
}



//Convert string from Uppercase to Lowercase without using strlwr()

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
		if(s1[i]>='A' && s1[i]<='Z')
		{
			s1[i] = s1[i] + 32;
		}
	}
	printf("Uppercase to lowercase conversion: %s",s1);
	
	return 0;
}


