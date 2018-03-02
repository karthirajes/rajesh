#include <stdio.h>
int main()
{
    int b, e;
    int a = 1;
    scanf("%d", &b);
    scanf("%d", &e);
    while (e!= 0)
    {
        a *= b;
        --e;
    }
    printf("%d", a);
retun 0;  
}
