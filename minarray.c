#include<stdio.h>
int main()
{
    int i,min,n;

    printf("enter the number of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the array values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++){
    if(a[i]<min)
    {
        min=a[i];
            }

}
printf("minimum:%d",min);
return 0;
}
