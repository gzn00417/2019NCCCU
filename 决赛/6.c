#include <stdio.h>
#include <string.h>
#define N 1000
#define M 1000

int last[N+10],next[M+10],to[M+10],b[N+10];

int main()
{
	int n,m,i,x,y,t;
	scanf("%d%d",&n,&m);
	for (i=1;i<=m;i++)
	{
		scanf("%d%d",&x,&y);
  		to[i]=x;
		next[i]=last[y];
		last[y]=i;
	}
	memset(b,0,sizeof(b));
	scanf("%d",&t);
	while (t!=-1)
	{
		b[t]=1;
		for (i=last[t];i>0;i=next[i])
		{
			if (b[to[i]]!=1)
			{
				printf("NO %d",t);
				return 0;
			}
		}
		scanf("%d",&t);
	}
	printf("YES");
	return 0;
}
