#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char string1[50];
	printf("Enter any string:");
	gets(string1);
	printf("The reverse of the given string is %s",strrev(string1));
	getch();
}
