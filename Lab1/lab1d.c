#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter First Number:");
	scanf("%d",& a);
	printf("Enter Second Number:");
	scanf("%d",& b);
	float div=(float)a/b;
	printf("The division is %f", div);
	getch();
}
