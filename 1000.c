#include <stdio.h>
void main() 
{	
 int m1,m2;
 char c;
 scanf("%d %c %d",&m1,&c,&m2);
 if(c=='/')
 {
  printf("%d\n",(m1/m2));
  }
  else
  {
  printf("%d\n",(m1%m2));
 }
}
