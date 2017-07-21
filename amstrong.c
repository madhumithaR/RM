#include<stdio.h>
void main()
[
int temp,num,digit,d=0;
printf("enter the number");
scanf("%d",&num);
temp=num;
if(temp%10!=0)
{
digit=num%10;
d=d+digit*digit*digit;
num=num/10;
}
if(temp==d)
{
printf("the number is amstrong");
}
else
{
printf("the number is not amstrong");
}
}
