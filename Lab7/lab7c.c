#include<stdio.h>
#include<conio.h>
void main()
{
int matrix1[3][3],matrix2[3][3],matrix3[3][3],i,j,k,sum;
printf("Enter the elements for first 3*3 matrix");
printf("\n-------------------------------------\n");
for(i=0;i<3;i=i+1)
{
for(j=0;j<3;j=j+1)
{
printf("Enter elements[%d][%d]:",i+1,j+1);
scanf("%d",&matrix1[i][j]);
}
}
printf("Enter the elements for second 3*3 matrix:");
printf("\n-------------------------------------\n");
for(i=0;i<3;i=i+1)
{
for(j=0;j<3;j=j+1)
{
printf("Enter elements[%d][%d]:",i+1,j+1);
scanf("%d",&matrix2[i][j]);
}
}
printf("The first 3*3 matrix is ");
printf("\n---------------------\n");
for(i=0;i<3;i=i+1)
{
for(j=0;j<3;j=j+1)
{
printf("%d ",matrix1[i][j]);
}
printf("\n");
}
printf("The second 3*3 matrix is ");
printf("\n----------------------\n");
for(i=0;i<3;i=i+1)
{
for(j=0;j<3;j=j+1)
{
printf("%d ",matrix2[i][j]);
}
printf("\n");
}
for(i=0;i<3;i=i+1)
{
for(j=0;j<3;j=j+1)
{
sum=0;
for(k=0;k<3;k=k+1)
{
sum=sum+matrix1[i][k]*matrix2[k][j];
}
matrix3[i][j]=sum;
}
}
printf("The product of two matrix is ");
printf("\n-------------------------\n");
for(i=0;i<3;i=i+1)
{
for(j=0;j<3;j=j+1)
{
printf("%d ",matrix3[i][j]);
}
printf("\n");
}
getch();
}
