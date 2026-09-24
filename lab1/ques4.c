#include<stdio.h>
int main(){
    int a[5]={10,20,30,40};
    int pos=2;
    int x=99;
    for(int i=5;i>pos;i--){
        a[i]=a[i-1];
        if((i-1)==pos){
            a[pos-1]=x;
        }
    }
   
    for(int i=0;i<6;i++){
        printf("%d ",a[i]);
    }
}