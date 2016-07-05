#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,c,j,n;
clrscr();
printf("enter the number of element");
scanf("%d",&n);
printf("Enter the element one by one");
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<n;i++)
{
C=0;
for(j=0;j<n;j++)
{
if(a[i]==a[j])
C++;
}
if(c==1)
printf("%d",a[i]);
}
getch();
}
