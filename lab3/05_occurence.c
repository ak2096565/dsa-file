// In a sorted array that may contain duplicates, use binary search to print the index of the first
// occurrence of the key.
// INPUT 8 / 1 2 2 2 3 4 5 6 / key 2 OUTPUT First occurrence at index 1

#include<stdio.h>
void BS(int a[],int n,int key){
    int low =0;
    int high=n;
    int flag=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==key&&key!=a[mid-1]){
            printf("found at %d",mid);
            flag=1;
            break;
        }
        else if(a[mid]<key){
            low=mid+1;

        }
        else{
            high=mid-1;

        }
    }
    if(flag==0){
        printf("element not found");
    }



}
int main(){
    int a[]={5,8,8,8,12,15,23,34,41};
    int n=9;
    int key=8;
    BS(a,n,key);

}