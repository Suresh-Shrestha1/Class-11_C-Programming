#include<stdio.h>
#include<conio.h>
void main()
{
	float l,b;
	printf("Enter length:");
	scanf("%f",&l);
	printf("Enter breadth:");
	scanf("%f",&b);
	float area=l*b;
	printf("The area of rectangle is %f", area);
	getch();
}
