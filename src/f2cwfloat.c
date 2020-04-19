/* This small program converts Fahrenheit to Celsius using float;
   Alexandre Rabelo
   April, 19, 2020   
*/

#include <stdio.h>

// Print Fahrenheit-Celsius table for fahr = 0, 5, 10, ..., 300;

int main(void){
    
    float fahr, celsius, lower, upper, step;

    lower = 0;          // Lower limit of temperature scale
    upper = 300;        // Upper limit
    step = 5;          // Step size

    fahr = lower;
    while (fahr <= upper){
        celsius = 5.0/9.0*(fahr - 32.0);
        printf("%3.0f\t%6.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}