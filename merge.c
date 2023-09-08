#include<stdio.h>
int main()
{
    int i,j,n1,n2,n3;
    printf("enter the size of 1st array");
    scanf("%d",&n1);
    int a1[n1],merge[100];

    printf("enter the 1st array values");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a1[n1]);
    }


     printf("enter the size of 2nd array");
    scanf("%d",&n2);
    int a2[n2];
    printf("enter the 2nd array values");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&a2[i]);


    }
    for(i=0;i<n1;i++)
    {
        merge[n3]=a1[i];
        n3++;
    }
    for(i=0,j=n1;j<n3&&i<n2;i++,j++ )
    {
        merge[j]=a2[i];

    }
printf("elements in the merged array");
    for(i=0;i<j;i++)
        printf("%d",merge[i]);
        getch();
    return 0;

}
