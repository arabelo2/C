/* This program counts input lines
   Alexandre RABELO
   April, 25, 2020
*/

# include <stdio.h>

/* Count lines in input */
int main(){
    int c, nl;
    
    nl = 0;
    while((c = getchar()) != EOF)
        if(c == '\n')
            ++nl; // Why do we need to indent? We usually indent to show what is controlled by what.
    printf("%d\n", nl);    
}