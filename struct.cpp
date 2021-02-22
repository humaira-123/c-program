#include<stdio.h>
struct student
{
    int no;
    char name[10];
    float sal;
};
int main()
{
    struct student s;
    printf(" enter the information");
    printf("\n");
    printf("enter the roll no\t");
    scanf("%d",&s.no);
    printf("%d",s.no);
    printf("\n");
    printf("enter the name of student\t");
    scanf("%s",&s.name);
    printf("%s",s.name);
    printf("\n");
    printf("enter the salary\t");
    scanf("%f",&s.sal);
    printf("%f",s.sal);

    return 0;
}