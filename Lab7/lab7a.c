#include<stdio.h>
#include<conio.h>
void main()
{
	int num [10],i,largest;
	printf("Enter the ten different numbers");
	printf("\n___________________________\n");
	for(i=0;i<=10;i=i+1)
	{
	printf("Enter number[%d]",i+1);
	scanf("%d",&num[i]);
}
	largest=num[0];
	for(i=0;i<10;i=i+1)	
	{
	if(largest<num[i])
	largest=num[i];
	}
	printf("The largest number among 10 different number is %d",largest);
	getch();
}
