// Position of the maximum — linear scan
// Read n integers. Print the largest value and the index where it occurs.
// INPUT 5 / 12 45 7 23 9 OUTPUT Max = 45 at index 1

#include<stdio.h>
void large_val(int arr[],int size){
    int key=0;
    int index=0;
    for(int i=0;i<size;i++){
        if(key<arr[i]){
            key=arr[i];
            index=i;
            
        }
    }
    printf("maximum is %d : at index %d :",key,index);
    
}
int main(){
    int arr[]={12,45,65,23,9};
    int size=5;
    large_val(arr,size);


}