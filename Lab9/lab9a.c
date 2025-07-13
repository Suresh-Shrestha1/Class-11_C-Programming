#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int num[15],i,j,temp;
	printf("Enter the 15 different number in random order");
	printf("\n________________________________________\n");
	for(i=0;i<15;i=i+1)
	{
		printf("Enter Number[%d]:",i+1);
		scanf("%d",&num[i]);
	}
	printf("The 15 different number in random order are");
	printf("\n______________________________________\n");
	for(i=0;i<15;i=i+1)
	{
		printf("\n%d",num[i]);
	}
	for(i=0;i<15;i=i+1)
	{
		for(j=0;j<14;j=j+1)
		{
			if(num[j]>num[j+1])
			{
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}
	}
	printf("The 15 different number in ascending order are");
	printf("\n_________________________________________\n");
	for(i=0;i<15;i=i+1)
	{
		printf("\n%d",num[i]);
	}
	getch();
}
