#include <stdio.h>
#include <math.h>
int main()
{
	int n,x1,y1,x2,y2,i;
	double sum=0.0;
	scanf("%d",&n);
	scanf("%d%d",&x1,&y1);
	for (i=2;i<=n;i++)
	{
		scanf("%d%d",&x2,&y2);
		sum+=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		x1=x2;
		y1=y2;
	}
	printf("%.2lf",sum);
	return 0;
}
