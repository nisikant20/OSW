#include<stdio.h>
long int num (int n);
int main(){
int n;
printf("Enter a positive number:");
scanf("%d" , &n);
printf("factorial of %d = %ld" , num(n));
return 0;
}
long int num(int n){
if (n>=1)
return n*num(n-1);
else
return 1;





}
