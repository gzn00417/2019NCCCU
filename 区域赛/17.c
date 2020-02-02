#include<stdio.h>
int main()
{
    int a,b,i,num=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2==0&&i%3==0&&i%7!=0)
        {
            num++;
        }
    }
    printf("%d",num);
    return 0;
}
