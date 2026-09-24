// In a sorted array, find the first and last occurrence of the key with binary search, then report
// how many times it appears — without scanning the whole array.
// INPUT 8 / 1 2 2 2 3 4 5 6 / key 2 OUTPUT 2 appears 3 times

#include<stdio.h>
void BS(int a[],int n,int key){
    int low =0;
    int high=n;
    int flag=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==key&&key!=a[mid-1]){
            // printf("found at %d",mid);
            flag=1;
            int count=0;
            for(int i=mid;i<n;i++){
                if(a[mid]!=a[i+1]){
                    break;
                }
                else{
                    count+=1;

                }
            }
            printf("%d appers first at index %d ",key,mid);
            printf("\n%d appers %d times",key,count);
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
    int a[]={5,8,12,15,20,23,23,23,23,34,41};
    int n=11;
    int key=23;
    BS(a,n,key);

}