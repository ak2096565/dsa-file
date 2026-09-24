#include<stdio.h>
int main(){
    struct student {
        char name[50];
        int rollno;
        float marks;
    };
    struct student s1={"Asha",12,88.5};
    printf("%s %d %1f",s1.name,s1.rollno,s1.marks);
}