#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array :");
    scanf("%d",&n);
    int a[n];
    //printf("enter the value of array");
    
    for(int i=0;i<n;i++){
        printf("Enter array %d ",i);
        scanf("%d",&a[i]); 
    }
    
    for(int j=n-1;j>=0;j--){
        printf("%d ",a[j]);
    }
}
