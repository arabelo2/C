/* This simplest program counts characters.
   Alexandre RABELO
   April, 18, 2020
*/

#include <stdio.h>
// Count characters in input
int main (void){
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf ("%ld\n", nc);
}