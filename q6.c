#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    clrscr();
 
    printf("\n Enter the Temparature in Celsius : ");
    scanf("%f",&celsius);
 
    fahrenheit = (1.8 * celsius) + 32;
    printf("\n Temperature in Fahrenheit : %f ",fahrenheit);
 
    getch();
    return 0;
    }
