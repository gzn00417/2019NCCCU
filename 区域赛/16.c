#include<stdio.h>
int main()
{
    int a;
    char light;
    scanf("%d %c",&a,&light);
    if(light=='Y'&&a==1)
    {
        printf("OK.");
    }
    else if(light=='Y'&&a==0)
    {
        printf("NO.");
    }
    else if(light=='G')
    {
        printf("OK.");
    }
    else if(light=='R')
    {
        printf("NO.");
    }
    return 0;
}
