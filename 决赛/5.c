#include <stdio.h>
#include <stdlib.h>
#define N 50000
int a[N+10],b[N+10];
void quick_sort_a(int left,int right)
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
	if (left<l)  quick_sort_a(left,r-1);
	if (l<right) quick_sort_a(r+1,right);
	return;
}
void quick_sort_b(int left,int right)
{
	int front=b[left],l=left,r=right;
	while (l<r)
	{
		while (l<r&&b[r]<front) r--;
		if (l<r)
		{
			b[l]=b[r];
			l++;
		}
		while (l<r&&b[l]>=front) l++;
		if (l<r)
		{
			b[r]=b[l];
			r--;
		}
	}
	b[l]=front;
	if (left<l)  quick_sort_b(left,r-1);
	if (l<right) quick_sort_b(r+1,right);
	return;
}
int main()
{
	int n,i,j,ans=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++) scanf("%d",&a[i]);
	for (i=1;i<=n;i++) scanf("%d",&b[i]);
	quick_sort_a(1,n);
	quick_sort_b(1,n);

	i=n;
	j=n;
	while (i>0&&j>0)
	{
		while (a[i]<=b[j]&&i>0&&j>0) i--;
		if (i>0)
		{
			ans++;
			i--;
			j--;
		}
		else break;
	}
	printf("%d",ans);
	
	return 0;
}
