#include<stdio.h>
#include<math.h>
 main()
{
    char s[1000],b[1000],a[1000];
    int i,j,l1,l2,count=0;
    gets(s);
    i=0;
    while(s[i]!='\0')
    {
        if(s[i]==' ')a[j]='\0';

        {

            for(i=0;i<l1;i++)

            {

             if(b[i]!=a[i])

                    count=count+abs(a[i]-b[i]);
            break;
        b[i]=s[i];
        i++;
    }
    b[i]='\0';


    j=0;
    i++;a[j]='\0';
        {

            for(i=0;i<l1;i++)

            {

                if(b[i]!=a[i])

                    count=count+abs(a[i]-b[i]);
     while(s[i]!='\0')
    {

        a[j]=s[i];
        j++;
        i++;

    }
   else if(l1>l2)
    {for(j=l2+1;j<=l1;j++)
        count=count+j;
        for(i=0;i<l2;i++)
        {
            if(a[i]!=b[i])
                count=count+abs(a[i]-b[i]);
        }
    }
    else{
        for(i=0;i<l1;i++)
        {
            if(a[i]!=b[i])
                count=count+abs(a[i]-b[i]);
        }
    }
    printf("%d",count);
}
