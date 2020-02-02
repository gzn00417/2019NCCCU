#include <stdio.h>
#include <stdlib.h>
#define N 500
int A[N][N];
int main()
{
    int n,m=0,i,j;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<n;i++) if(A[i][i]==0) m++;
    for(j=0;j<n;j++) if(A[n-1-j][j]==0) m++;
    if (n%2!=0&&A[n/2][n/2]==0) m--;
    printf("%d",m);
    return 0;
}
