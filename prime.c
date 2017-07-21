#include<stdio.h>
{
int n;
flag;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(n%i==0)
flag=1;
break;
}
if(flag==0)
printf(" n is prime");
else
printf(" n is not prime");
}

















