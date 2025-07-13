#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a,b,c;
	printf("Enter Length of First Side:");
	scanf("%f",&a);
	printf("Enter Length of Second Side:");
	scanf("%f",&b);
	printf ("Enter Length of Third Side:");
	scanf("%f",&c);
	float s=(a+b+c)/2;
	float k=s-a;
	float l=s-b;
	float m=s-c;
	float p=s*k*l*m;
	float aot=sqrt(p);
	printf("The area of triangle is %f", aot);
	getch();
}
