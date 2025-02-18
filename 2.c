#include <stdio.h>
int minNumberInrotateArray(int* inrotateArray,int inrotateArraylen)
{
    int left=0,right=inrotateArraylen-1;
    while(left<right){
    int mid =(left+right)/2;
    if(inrotateArray[mid]>inrotateArray[right]){
        left=mid+1;
    }if(inrotateArray[mid]<inrotateArray[right]){
        right=mid;
    }else{right--;}
}return inrotateArray[left];}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s= minNumberInrotateArray(a, n);
    printf("%d",s);

}