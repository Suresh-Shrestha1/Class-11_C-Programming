#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter First Number:");
	scanf("%d",& a);
	printf("Enter Second Number:");
	scanf("%d",& b);
	printf("Enter Third Number:");
	scanf("%d",& c);
	if (a>b&&a>c)
	printf("The largest number is %d",a);
	else if (b>a&&b>c)
	printf("The largest number is %d",b);
	else
	printf("The largest number is %d",c);
	getch();
	
}
