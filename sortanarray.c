#include<stdio.h>
int main()
{
    int i,j,n,tmp;
    printf("enter the number");
    scanf("%d",&n);
    int a[n];
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    printf("sorted array");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
