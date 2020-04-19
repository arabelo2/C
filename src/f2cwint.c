/* This small program converts Fahrenheit to Celsius with integer
   Alexandre Rabelo
   April, 14, 2020   
*/

#include <stdio.h>

/* Print Fahrenheit-Celsius table
   for fahr = 0, 5, 10, ..., 300
*/

int main(void){
    int fahr, celsius, lower, upper, step;

    lower = 0;          // Lower limit of temperature scale
    upper = 300;        // Upper limit
    step = 5;          // Step size

    fahr = lower;
    while (fahr <= upper){
        celsius = 5*(fahr - 32)/9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
