#include<stdio.h>
#include<conio.h>
void main()
{
	float r,pi=3.1428;
	printf("Enter Radius:");
	scanf("%f",& r);
	float aoc=pi*r*r;
	printf("The area of circle is %f",aoc);
	getch();
}
