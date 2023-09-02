#include<stdio.h>
int main()
{
    int i,max,n;

    printf("enter the number of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the array values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++){
    if(a[i]>max)
    {
        max=a[i];
            }

}
printf("maximum array:%d",max);
return 0;
}
