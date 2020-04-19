/* This simplest program is one that copies its input to its output one character at a time.
   Alexandre RABELO
   April, 18, 2020
*/

#include <stdio.h>
// Copy input to output
int main (void){
    int c;

    c = getchar();
    while (c != EOF){
        putchar(c);
        c = getchar();
    }
}