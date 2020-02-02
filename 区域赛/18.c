#include <stdio.h>
#include <stdlib.h>
#define N 100000
int a[N+1];
void quick_sort(int left,int right)
{
	int front=a[left],l=left,r=right;
	while (l<r)
	{
		while (l<r&&a[r]<front) r--;
		if (l<r)
		{
			a[l]=a[r];
			l++;
		}
		while (l<r&&a[l]>=front) l++;
		if (l<r)
		{
			a[r]=a[l];
			r--;
		}
	}
	a[l]=front;
	if (left<l)  quick_sort(left,r-1);
	if (l<right) quick_sort(r+1,right);
	return;
}
int main()
{
	int n,k,i,k_score,ans=0;
	scanf("%d%d",&n,&k);
	for (i=1;i<=n;i++) scanf("%d",&a[i]);
	k_score=a[k];
	quick_sort(1,n);
	a[0]=-1;
	for (i=1;i<=n;i++)
	{
		if (a[i]!=a[i-1]) ans=i;
		if (a[i]==k_score)
		{
			printf("%d",ans);
			return 0;
		}
	}
	return 0;
}
