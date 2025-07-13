#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char string1[50];
	printf("Enter any string in lower case:");
	gets(string1);
	printf("The given string in upper case is %s",strupr(string1));
	getch();
}
