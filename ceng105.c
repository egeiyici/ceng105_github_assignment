#include<stdio.h>
#include<math.h>
int main(void)
 {
 
float num1, Celsius;



 
 printf("enter the temperature in fahrenheit=");
 scanf("%f", &num1);
    Celsius= (num1-32)*5/9;
   printf("%.2f degrees fahrenheit is equal to: %.2f in celsius" ,num1 ,Celsius);
 
 
 
 
 
 
 
 
 
 
 return(0);
 
 
 
 }