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
        /* The body of this loop is empty, because all the work is done in the test and increment parts. But the
        grammatical rules of C require that a for statement have a body. The isolated semicolon, called
        a null statement, is there to satisfy that requirement. It is on a separate line to make it visible.
        */
    printf ("%.0f\n", nc);
}