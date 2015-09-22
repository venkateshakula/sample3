#include<stdio.h>
#include<ctype.h>
main()
{
	char ch1 = 'a',
	     ch2 = ' ';
	char ch3;
	if(isspace(ch1))
		printf("ch1 is a space character \n");
	else if(!isspace(ch1))
		printf("ch1 is not \n");
	if(isspace(ch2))
		printf("ch2 is a space character \n");
	else
		printf("ch2 is not \n");
	ch3=toupper(ch1);
	printf("%c\n",ch3);
}

