#include<stdio.h>
#include<math.h>
int main(void)
 {
 
float num1, Celsius;



 //
 printf("Enter the Temperature in Fahrenheit=");
 //input value
 scanf("%f", &num1);
    Celsius= (num1-32)*8/5;
   printf("%.2f Degrees Fahrenheit is equal to: %.2f in celsius" ,num1 ,Celsius);
 
 
 
 
 
 
 
 
 
 
 return(0);
 
 
 
 }