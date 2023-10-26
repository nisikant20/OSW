#include<stdio.h>
int main()
{
int a , b, c;
scanf("%d%d%d" , &a , &b , &c);
a=a+b+c;
c= a-(b+c);
a = a - (a+b);
printf("after swap the value of a is :%d , value of c is :%d" ,a,c);

return 0 ;

