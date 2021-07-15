//Passing structures to function in C 
//Call by Reference
#include<stdio.h>
#include<stdlib.h>

struct charset 
{
	char s;
	int i;
};

void keyvalue(char *s, int *i)
{
	scanf("%c %d", s,i);
}

int main()
{
	struct charset cs;
	keyvalue(&cs.s, &cs.i);
	printf("The key values are:\n%c %d",cs.s, cs.i);
	return 0;
	
}
