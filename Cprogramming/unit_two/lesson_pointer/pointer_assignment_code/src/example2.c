#include <stdio.h>

void example2 ()
{
	char Alphabets [27];
	char *ptr=Alphabets ;
	for (int i=0;i<26;i++)
	{
		Alphabets [i]=i+'A';

	}
	ptr=Alphabets;
	printf("The Alphabets are :\n ");
	for (int i=0;i<26;i++)
	{
		printf("%c",*ptr);
		ptr++;
	}
}
