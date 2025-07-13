#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char string1[50];
	printf("Enter any string:");
	gets(string1);
	int l=strlen(string1);
	printf("The length of the given string is %d",l);
	getch();
}
