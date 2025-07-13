#include<stdio.h>
#include<conio.h>
void main()
{
	int paisa,R,P;
	printf("Enter the amount in paisa:");
	scanf("%d",&paisa);
 R=paisa/100;
P=paisa%100;
printf("The coverted amount is Rs%d and %d paisa",R,P);
	getch();
}
