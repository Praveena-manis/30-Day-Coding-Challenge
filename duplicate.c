#include<stdio.h>
int main()
{
int n,i,j;
printf("enter the number ");
scanf("%d",&n);
int a[n];
printf("enter the arrays");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
            printf("duplicate :%d",a[i]);

    }
}
return 0;
}
