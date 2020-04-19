/* This simplest program counts characters.
   Alexandre RABELO
   April, 18, 2020
*/

#include <stdio.h>
// Count characters in input
int main (void){
    double nc;

    /* ++ means increment by one and it is more concise and often more efficient than you write nc = nc + 1;
       prefix operators (++nc)
       postfix operators (nc++)
    */
           
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf ("%.0f\n", nc);
}