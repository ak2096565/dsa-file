#include<stdio.h>
int main(){
    int a[5]={4,8,15,16,23};
    int key=15;
    int flag=0;
    for(int i=0;i<5;i++){
            if(a[i]==key){
                printf("found at index :%d",i);
                flag=flag+1;

            }
    }
    if(flag==0){
       printf("key not found"); 
    }
}