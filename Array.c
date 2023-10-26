#include<stdio.h>
int main(){
printf("Enter the  size of the array: \n");
scanf("%d" , &s);
int a[s];
for(int i=0;i<<s;i++){

printf("Enter the element \n" ,i); 
scanf("%d,&a[i]);
}

int max =a[0];
for(int i=0;i<s;i++){
if (a[i]>max){
max =a[i];
}}
printf("The Greatest number is %d\n" , max);
return 0;
}
