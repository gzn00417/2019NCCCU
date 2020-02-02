#include <stdio.h>
#include <stdlib.h>
#define N 1000
int a[N+10],b[N+10];
int main()
{
    int n,i,x,m,flag=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		x=a[i];
		m=0;
		while (x!=0)
		{
			m=x%10>m?x%10:m;
			x=x/10;
		}
		b[i]=a[i]-(a[i]/100)%10*100+m*100;
		if (a[i]==b[i]) flag=1;
	}
	if (flag==0)
	{
		printf("Done");
		for (i=1;i<=n;i++) printf(" %d",b[i]);
	}
	else
	{
		printf("Error");
		for (i=1;i<=n;i++) if (b[i]==a[i]) printf(" %d",b[i]);
	}
    return 0;
}
