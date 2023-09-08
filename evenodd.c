#include<stdio.h>
int main()
{
   int n;

   printf("Enter the size of the array: ");
   scanf("%d", &n);
   int a[n];

   printf("Enter array elements: \n");
   for(int i=0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }

   printf("Even numbers in the array are: \n");
   for(int i=0; i<n; i++)
   {
     if(a[i]%2==0)
     printf("%d ", a[i]);
   }

   printf("\nOdd numbers in the array are: \n");
   for(int i=0; i<n; i++)
   {
     if(a[i]%2!=0)
     printf("%d ", a[i]);
   }

   return 0;
}
