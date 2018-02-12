#include<stdio.h>
#include<string.h>
int main() 
{
    char a1[15];
    int a,b;
    scanf("%d",s);
    a=strlen(s);
    if(a%2!=0)
    {
     b=a/2;
     s[b]='*';
      printf("%s",a1);
    }
    else
     {
        b=a/2;
        s[b]='*';
        s[b-1]='*';
         printf("%s",a1);
     }
   return 0;
}
