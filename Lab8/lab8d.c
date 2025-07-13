#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char string1[50];
	printf("Enter any string in upper case:");
	gets(string1);
	printf("The given string in lower case is %s",strlwr(string1));
	getch();
}
