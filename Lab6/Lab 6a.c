#include<stdio.h>
#include<conio.h>
void main()
{
	int salary[10],i,count=0;
	printf("Enter the salary of 10 different employees");
	printf("\n________________________________________\n");
	for(i=0;i<10;i=i+1)
	{
		printf("Enter salary [%d]:",i+1);
		scanf("%d",&salary[i]);
	}
	for(i=0;i<10;i=i+1)
	{
		if(salary[i]>=30000&&salary[i]<=40000)
		count=count+1;
	}
	printf("The no of employees whose salary id between 30000 to 40000 is %d",count );
	getch();
}
