/* This program counts the number of occurrences of each digits, of white space characters such as blank, tab, newlines, and of all other characters.
   Alexandre Rabelo
   April, 27, 2020
*/

# include <stdio.h>
# include <stdlib.h>

// Count digits, white space, others
int main(void) {
    
    int c, i, j, nwhite, nother;
    int ndigit[10];
    
    nwhite = nother = 0;
    
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    
    printf ("digits = ");
    for (j = 0; j < 10; ++j)
        printf (" %d", ndigit[j]);
    printf (", white space = %d, other = %d\n", nwhite, nother);
}