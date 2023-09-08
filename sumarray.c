#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter the number of arrays");
    scanf("%d",&n);
    int a[n];
    printf("enter the values of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("sum of an array:%d",sum);
    return 0;
}
