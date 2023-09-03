#include<stdio.h>
int main()
{
int n1,n2,i,j,count=0;
printf("enter the number1 ");
scanf("%d",&n1);
int a1[n1];
printf("enter the arrays1");
for(i=0;i<n1;i++)
{
    scanf("%d",&a1[i]);
}
printf("enter the number2 ");
scanf("%d",&n2);
int a2[n2];
printf("enter the arrays2");
for(j=0;j<n2;j++)
{
    scanf("%d",&a2[j]);
}
for(i=0;i<n1;i++)
{
    for(j=0;j<n2;j++){

        if(a1[i]==a2[j]){
        count++;
    break;
        }
}
}
if((count==n1)&&(count==n2))
{
    printf("arrays are equal");
}
else
{
    printf("arrays are not equal");
}
return 0;
}
