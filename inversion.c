#include <stdio.h>

int main(void) 
{
	int n,i,j;
	int a[50];
	int c,m1;
	int f[50];
	/* enter the range */
	scanf("%d",&n);
	/* enter the values */
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				c++;
			}
		}
		f[i]=c;
		//printf("%d ",f[i]);
		
	}
	m1=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(f[i]>f[j])
			{
				m1++;
				
			}
			
		}
		
	}
	printf("\n%d",m1);
	return 0;
}
