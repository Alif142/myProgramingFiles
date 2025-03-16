#include <stdio.h>
#include <string.h>
typedef struct {
    char name[50];
    char id[10];
    int age;
    int grades[5];
}Student;

void print(Student student);

int main(){
    Student kevin;
    strcpy(kevin.name,"Kevin");
    strcpy(kevin.id, "2222257");
    kevin.age = 40;
    kevin.grades[0] = 1;
    kevin.grades[1] = 2;
    kevin.grades[2] = 3;
    kevin.grades[3] = 4;
    kevin.grades[4] = 5;
    print(kevin);
}
void print(Student student){
    printf("Name:%s\n",student.name);
    printf("Age:%d\n",student.age);
    printf("Id:%s\n",student.id);
    printf("Grades:\n");
    for (int i=0; i<5; i++) {
        printf("%d\n",student.grades[i]) ;
    }
}
