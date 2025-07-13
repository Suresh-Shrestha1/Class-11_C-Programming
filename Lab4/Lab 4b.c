#include<stdio.h>
#include<conio.h>
void main()
{
	int i,s=1;
	printf("The series up to 13 terms are \n");
	for(i=1;i<=13;i=i+1)
	{
		printf("%d,  ",s);
	s=s+4;
    }
	getch();
}
