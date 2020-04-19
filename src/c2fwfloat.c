/* This small program converts Celsius to Fahrenheit using float;
   Alexandre Rabelo
   April, 19, 2020   
*/

#include <stdio.h>

// Print Celsius-Fahrenheit table for celsius = 0, 0.1, 0.2, ..., 100;

int main(void){
    
    float fahr, celsius, lower, upper, step;

    lower = 0;          // Lower limit of temperature scale
    upper = 100;        // Upper limit
    step = 0.1;          // Step size

    celsius = lower;
    while (celsius <= upper){
        fahr = 9.0/5.0*celsius + 32;
        printf("%3.1f\t%6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}