#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,ans=0,flag,s;
    scanf("%d",&x);
    while(x!=-1)
    {
        s=0;
        flag=0;
        while(x!=0&&flag==0)
        {
			s+=x%10;
			if (x%10==8) flag=1;
			x/=10;
        }
		if (flag==0&&s==8) flag=1;
        if (flag==1) ans++;
		scanf("%d",&x);
    }
    printf("%d",ans);
    return 0;
}
