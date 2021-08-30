//Read and Print String

#include<stdio.h>

int main()
{
	char name[100];
	printf("Enter name: ");
	//scanf("%s",name);
	//scanf("%[^\n]s",name);
	gets(name);
	printf("%s\n",name);
	printf("%.5s\n",name);
	printf("%10.5s\n",name);
	printf("%s\n",&name[2]);
	
	puts(name);
	puts(name);
	
	return 0;
}
