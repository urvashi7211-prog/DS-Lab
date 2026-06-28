/*WAP to define a C structure named Student (roll_no, name, branch and 
batch_no) and also to access the structure members using Pointer. */

#include<stdio.h>
struct Student{
    int roll_no;
    char name[50];
    char branch[50];
    int batch_no;
};
int main(){
    struct Student s ;
    struct Student *s1 ;
    s1 = &s;

    printf("Enter student roll no : ");
    scanf("%d",&s1->roll_no);

    printf("Enter student name : ");
    scanf("%s",s1->name);

    printf("Enter student branch : ");
    scanf("%s",s1->branch);

    printf("Enter student batch : ");
    scanf("%d",&s1->batch_no);


    printf("roll no : %d\n",s1->roll_no);
    printf("name : %s\n",s1->name);
    printf("branch : %s\n",s1->branch);
    printf("batch : %d",s1->batch_no);

    return 0;
}