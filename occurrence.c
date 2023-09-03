#include<stdio.h>
int main()
{
int n,i,j,num,count=0;
printf("enter the number ");
scanf("%d",&n);
int a[n];
printf("enter the arrays");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the number to find occurrence");
scanf("%d",&num);
for(i=0;i<n;i++)
{
    if(a[i]==num)
        count++;
}
printf("occurrence of %d is:%d",num,count);
return 0;
}
