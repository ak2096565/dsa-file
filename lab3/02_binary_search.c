// Binary search (iterative) — sorted array
// Read a sorted array of n integers and a key. Print the index, or "Not found".
// INPUT 7 / 5 8 12 15 23 34 41 / key 34 OUTPUT Found at index 5
#include<stdio.h>
void BS(int a[],int n,int key){
    int low =0;
    int high=n;
    int flag=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==key){
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
    int a[]={5,8,12,15,23,34,41};
    int n=7;
    int key=2;
    BS(a,n,key);

}