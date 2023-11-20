#include<stdio.h>
#include<math.h>
int main(void)
 {
 
float num1, Celsius;



 //
 printf("Enter the Temperature in Fahrenheit=");
 scanf("%f", &num1);
    Celsius= (num1-32)*8/5;
   printf("%.2f Degrees Fahrenheit is Equal to: %.2f in Celsius" ,num1 ,Celsius);
 
 
 
 
 
 
 
 
 
 
 return(0);
 
 
 
 }