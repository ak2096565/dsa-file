#include<stdio.h>
int max(int arr[],int n){
    int key=arr[0];
    for(int i=0;i<n;i++){
        if(key<arr[i]){
            key=arr[i];
        }
    }
    return key;

}
int min(int arr[],int n){
    int key=arr[0];
    for(int i=0;i<n;i++){
        if(key>arr[i]){
            key=arr[i];
        }
    }
    return key;

}

int main(){
    int n;
    printf("enter the number of element of array : ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("enter the element at index %d ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);

    }
    int x=max(arr,n);
    int y=min(arr,n);
    printf(" the maximam is %d ",x);
    printf("the minimum is %d ",y);
    

    
}
