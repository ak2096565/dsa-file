// Count occurrences — linear
// Read n integers and a key. Print how many times the key appears.
// INPUT 6 / 4 7 4 9 4 2 / key 4 OUTPUT Count = 3
#include<stdio.h>
void count(int arr[],int key,int n){
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            flag=flag+1;

        }
    }
    printf("count is %d: ",flag);

}
int main(){
    int a[]={4,7,4,9,4,2};
    int key=4;
    int n=6;
    count(a,key,n);

}