#include<stdio.h>
#include<conio.h>
void main()

{
int n,reverse=0;
scanf("%d",&n);
while(n!=0)
{
	reverse=reverse*10;
	reverse=reverse+n%10;
	n=n/10;
}
printf("%d",reverse);
}
