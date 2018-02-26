
#include<stdio.h>
int main()
{
	int b,a,c,i,sum=0;
	scanf("%d",&a,&b,&c);
	for(i=0;i<a;i++)
	{
		sum=sum+b;
		b=b+c;
	}
	printf("%d",sum);
}
