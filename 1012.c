#include <stdio.h>
#include<coniio.h>
void main() 
{
	int n,a[10],i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]!=i)
		{
			printf("%d",i);
			break;
		}
	}
	}
