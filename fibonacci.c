#include<stdio.h>
int fibonacci(int n);
int main() {
int n;
printf("Enter a numer:");
scanf("%d" ,&n);
int fibonacci = fibonacci(n);
printf("%d" ,&n);
int fibonacci(int n){
if(n <=1)
{
return n;}
return fibonacci(n-1)+fibonacci(n-2);}
}

