// 1 Linear search — basic
// Read n integers and a key. Print the index of the key, or "Not found".
// INPUT 5 / 12 5 8 23 15 / key 23 OUTPUT Found at index 3

#include<stdio.h>
int main(){
    int a[]={12,5,8,23,15};
    int key=23;
    int flag=0;
    for(int i=0;i<5;i++){
        if(a[i]==key){
            printf("found at index %d :",i);
            flag=1;

        }
    }
    if(flag==0){
        printf("key is not available");
    }
}