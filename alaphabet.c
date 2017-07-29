#include<stdio.h>
void main()
{
char c;
printf("enter the charactor");
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
	printf("the c is  alaphabet");
}
else
{
	printf("the c is  not alaphabet");
}
printf("\n");
}
