#include<stdio.h>
#include<conio.h>
void main()
{
	int age[15],i,count=0;
	printf("Enter the salary of 15 different persons");
	printf("\n________________________________________\n");
	for(i=0;i<15;i=i+1)
	{
		printf("Enter age [%d]:",i+1);
		scanf("%d",&age[i]);
	}
	for(i=0;i<15;i=i+1)
	{
		if(age[i]>=30&&age[i]<=40)
		count=count+1;
	}
	printf("The no of persons whose age is between 30 to 40 is %d",count );
	getch();
}

