#include<stdio.h>
void main()
{
int a[10],s=0;
printf("enter the elements of array \n");
for(int i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<10;i++)
{
s=s+a[i];
}
printf("the sum of 10 numbers is %d",s);
}
