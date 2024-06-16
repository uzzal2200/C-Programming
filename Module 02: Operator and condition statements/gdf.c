#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sum;
    sum=a+b;
    int sub;
    sub=a-b;
    int mul;
    mul=a*b;
    float div;
    div=a/b;
    printf("%d\n",sum); 
    printf("%d\n",sub); 
    printf("%d\n",mul); 
    printf("%.2f\n",div); 
    return 0;
}