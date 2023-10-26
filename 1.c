#include<stdio.h>
#define PI 3.14
void result (float radius , float side);
int main(){
float radius,side;
printf("Enter the radius of the circle");
scanf("%f" , &radius);
printf("Enter the side of the square");
scanf("%f" , &side);
result (radius , side);
return 0;
}
void result(float radius , float side)
{
side/=2;
if(radius<=side){
printf("CIRINSQ");
}
else if(side*side < PI*radius*radius){
printf("SQRINCIR");
}
}
