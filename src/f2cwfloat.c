/* This small program converts Fahrenheit to Celsius using float and symbolic constants;
   Alexandre Rabelo
   April, 19, 2020   
*/

#include <stdio.h>

#define LOWER 0         // Lower limit of temperature scale
#define UPPER 300       // Upper limit
#define STEP 5          // Step size

// Print Fahrenheit-Celsius table

int main(void){
    
    float fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3.0f\t%6.2f\n", fahr, 5.0/9.0*(fahr - 32));
}