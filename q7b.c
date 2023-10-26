#include<stdio.h>
int main(){

 float km, miles;
    
  
    printf("Enter the distance (in Miles): ");
    scanf("%f", &miles);
    
  
    km = miles / 0.62;
    
   
    printf("%.2f miles = %.2f kilometers", km, miles);
    return 0;
    }
