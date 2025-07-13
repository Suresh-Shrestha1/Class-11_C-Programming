#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,count=0;
	printf("Enter any number:");
	scanf("%d",& n);
	for(i=1;i<=n;i=i+1)
	{
		if(n%i==0)
		count=count+1;
	}
	if(count==2)
	printf("%d is prime no",n);
	else
	printf("%d is not prime no",n);
	getch();	
}
