#include<stdio.h>
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    printf("%d %d",&a,&b);
}
void badswap(int *a,int *b ){
    int temp2=*a;
    *a=*b;
    *b=temp2;
    printf("%d %d",&a,&b);

}

int main(){
    badswap(10,20);
    swap(10,20);
}