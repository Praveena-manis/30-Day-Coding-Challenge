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


    }
    }
    if(s!=-1){
            printf("first occurrence %d with their index %d ",k,s);
            }
            else
                {
                printf("not found in their index and key array");

}

return 0;
}


