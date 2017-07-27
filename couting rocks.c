#include <stdio.h>

int main(void)
{
	int s,r;
	int i,j,c;
	int x,y;
	int size[100];
	/* enter the no.of sample */
	scanf("%d ",&s);
	/* enter no.of ranges */
	scanf("%d",&r);
	for(i=0;i<s;i++)
	{
		scanf("%d",&size[i]);
	}
	for(j=1;j<=r;j++)
	{
		c=0;
		scanf("%d%d",&x,&y);
		for(i=0;i<s;i++)
		{
			if((size[i]>=x)&&(size[i]<=y))
			{
				c++;
			}
		}
		printf("%d\n",c);

	} 

	return 0;
}
