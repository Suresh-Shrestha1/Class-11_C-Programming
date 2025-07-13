#include<stdio.h>
#include<conio.h>
void main()
{
	int matrix1[3][3],matrix2[3][3],sum[3][3],i,j;
	printf("Enter the elements for first 3*3 matrix");
	printf("\n_____________________________________\n");
	for(i=0;i<3;i=i+1)
{
	for(j=0;j<3;j=j+1)
	{
		printf("Enter the elements[%d][%d]:",i+1,j+1);
		scanf("%d",&matrix1[i][j]);
	}}
	printf("Enter the elements for second 3*3 matrix");
	printf("\n______________________________________\n");
	for(i=0;i<3;i=i+1)
	{
		for(j=0;j<3;j=j+1)
		{
			printf("Enter elements[%d][%d]:",i+1,j+1);
			scanf("%d",&matrix2[i][j]);
		}}
		printf("The first 3*3 matrix is");
		printf("\n_____________________\n");
		for(i=0;i<3;i=i+1)
		{
			for(j=0;j<3;j=j+1)
			{
				printf("%d ",matrix1[i][j]);
			}
			printf("\n");
		}
		printf("The second 3*3 matrix is");
		printf("\n_______________________\n");
		for(i=0;i<3;i=i+1)
		{
			for(j=0;j<3;j=j+1)
			{
				printf("%d ",matrix2[i][j]);
			}
			printf("\n");
		}
		printf("The sum of two 3*3 matrix is");
		printf("\n___________________________\n");
		for(i=0;i<3;i=i+1)
		{
			for(j=0;j<3;j=j+1)
			{
				sum[i][j]=matrix1[i][j]+matrix2[i][j];
				printf("%d ",sum[i][j]);
			}
			printf("\n");
		}
		getch();
		}
