#include<stdio.h>
#include<conio.h>
main()
{
int i,j,rows;
printf("enter a number to define the rows : \n");
scanf("%d",&rows);
printf("\n");
for(i=0;i<rows;i++)
{
for(j=0;j<=i;j++)
{
printf("*");
}
printf("\n");
}
getch();
}
