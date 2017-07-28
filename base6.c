
#include <stdio.h>

int main(void) 
{
	int n,n1,m,r;
	int a[50],b[50];
	int i,j,m1=0;
	/* enter the no.of values */
	scanf("%d",&n);
	if(n<=50)
	{
		/* enter the values */
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		for(i=0;i<n;i++)
		{
			b[i]=0;
			while(a[i]>=1)
			{
				n1=a[i]/6;
				m=n1*6;
				r=a[i]-m;
				b[i]=b[i]+r;
				a[i]=n1;
			}
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(b[i]>b[j])
				{
					m1++;
				}
			}
		}
		
	printf("%d ",m1);	
		
		
	}
	
	return 0;
}
