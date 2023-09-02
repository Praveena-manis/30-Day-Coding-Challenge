#include<stdio.h>
int main(){
    int i, n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Entered elements of array : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    reverse(a, 0, (n-1));
    printf("\n");
    printf("The elements of array after reversal : ");
    for(i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
}
void reverse(int a[], int m, int n){
    int temp;
    if(m >= n){
        return;
    }
    temp = a[m];
    a[m] = a[n];
    a[n] = temp;
    reverse(a, m+1, n-1);
}
