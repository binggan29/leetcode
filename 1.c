#include <stdio.h>

int f[50]={0};

int feibonaqi(int n)
{
    if(n<=1) return 1;
    if(f[n]>0) return f[n];
    return f[n]=(feibonaqi(n-1)+feibonaqi(n-2));
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",feibonaqi(a));
    return 0;
}