#include <stdio.h>
 main()
{
	char a[100];
	scanf("%s",a);
	if(a[0]=='s' || a[0]=='S')
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
