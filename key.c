#include<stdio.h>
int main()
{
    int i,k,n;
    int s=-1;

    printf("enter the number of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the array values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the key");
    scanf("%d",&k);
    for(i=0;i<n;i++){
    if(a[i]==k)
    {
        s=i;
        break;
    }
    }
    if(s!=-1){
            printf("key found in array ");
            }
            else
                {
                printf("not found in array");

}

return 0;
}


