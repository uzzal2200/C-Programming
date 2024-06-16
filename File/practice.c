#include<stdio.h>
struct student
{
    char name[58];
    int age;
    int roll;

};

int main()
{
   struct student s[2];
   for(int i=0;i<2;i++)
   {
    printf("stduent : %d\n",i+1);
    printf("student name\n");
    scanf("%s",&s[i].name);
    printf("age : \n");
    scanf("%d",&s[i].age);
    printf("Roll : \n");
    scanf("%d",&s[i].roll);


   }
   printf("The information of student\n");
   for(int i=0;i<2;i++)
   {
    printf("student : \n",i+1);
    printf("%s\n",s[i].name);
    printf("%d\n",s[i].age);
    printf("%d\n",s[i].roll);
   }
    return 0;
}