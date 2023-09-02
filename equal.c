#include <stdio.h>
int main()
{

    int a[]={1,2,5,4,0};
    int b[]={1,2,5,4,0};
    int s=sizeof(a)/sizeof(0);
    int p=sizeof(b)/sizeof(0);
    if(s==p)
    {
        printf("output1");
    }
    else
    {
        printf("output0");
    }
    return 0;
}
