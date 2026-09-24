#include<stdio.h>
int main(){
    struct student{
        char name[20];
        int rollno;
        float marks;

    };
    struct student s[3];
    int i;
    int top=0;
    for(i=0;i<3;i++){
        printf("enter the %d st student details : ",i);
        scanf("%s %d %f",s[i].name,&s[i].rollno,&s[i].marks);

    }
   
    for(i=1;i<3;i++){
        if(s[i].marks>s[top].marks){
            top=i;
        }
    }
    printf("topper is %s",s[top].name);

}