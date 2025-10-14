#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student{
    char name[20];
    int age;
    int rollno;
};
int main(){
    struct Student s1;
    strcpy(s1.name, "Raunak");
    s1.age = 20;
    s1.rollno = 100000;

    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Roll No: %d\n", s1.rollno);

    return 0;
}
