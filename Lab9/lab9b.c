#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name[10][50],temp[50];
	int i,j;
	printf("Enter the name of 10 different students in random order");
	printf("\n--------------------------------------------\n");
	for(i=0;i<10;i=i+1)
	{
		printf("Enter name[%d]",i+1);
		gets(name[i]);
	}
	printf("The name of 10 different students in random order are");
	printf("\n------------------------------------------\n");
	for(i=0;i<10;i=i+1)
	{
		printf("\n%s",name[i]);
	}
	for(i=0;i<10;i=i+1)
	{
		for(j=0;j<9;j=j+1)
		{
			if(strcmp(name[j],name[j+1])>0)
		    {
				strcpy(temp,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],temp);
			}
		}
	}
	printf("The name of 10 different students in ascending order are");
	printf("\n---------------------------------------------\n");
	for(i=0;i<10;i=i+1)
	{
		printf("\n%s",name[i]);
	}
	getch();
}
