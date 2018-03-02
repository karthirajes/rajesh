#include <stdio.h>
#include<string.h>
int main() 
{
int i,k,len,n[7];
char roman[7];
scanf("%[^\n]s",roman);
len=strlen(roman);
k=n[len-1];
for(i=len-1;i>0;i--)
{
	if(n[i]>n[i-1])
	k=k-n[i-1];
	else
	k=k+n[i-1];
}
printf("%d",k);
	return 0;
}
