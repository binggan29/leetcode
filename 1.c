#include <stdio.h>
int main()
{
    int n,first=1,second=1;
    scanf("%d",&n);
   int x=1;
   int result;
    for(x;x<n-1;x++)
    {
        result=first+second;
        first=second;
        second=result;
    }
    printf("%d",result);
}