#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rev=0;
	printf("Enter any number:");
	scanf("%d",& n);
	int digit=n;
	while (n!=0)
	{
		int m=n%10;
		rev=rev*10+m;
		n=n/10;
	}
	if (digit==rev)
	printf("%d is palindrome no",digit);
	else
	printf("%d is not palindrome no",digit);
	getch();
}
