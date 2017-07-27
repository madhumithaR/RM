#include <stdio.h>

int main(void)
{
	char alpha1[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char alpha2[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int i,j,k;
	int n;
	int num,count=0;
	int tc;
	
	scanf("%d",&tc);
	for(n=1;n<=tc;n++)
	{
		scanf("%d",&num);
		for(i=0;i<26;i++)
		{
			for(j=1;j<=9999;j++)
			{
				printf("TN %02d %c %04d\n",num,alpha1[i],j);
				count++;
			}
		}
/*	for(k=0;k<26;k++)	
	{
		for(i=0;i<26;i++)
		{
			for(j=1;j<=9999;j++)
			{
				printf("TN %d %c%c %04d\n",num,alpha1[k],alpha2[i],j);
				count++;
			}
		}
		
	}
		
*/		
	}
	printf("%d",count);
	return 0;
}
