/* This function raises an integer m to a positive integer power n.
   Alexandre RABELO
   April, 27, 2020
*/

# include <stdio.h>

int power(int m, int n);

// Test power function
int main(){
    int i;
    
    for (i = 0; i <= 10; ++i)
        printf ("%10d %20d %30d\n", i, power(2, i), power(-3, i));
    return 0;
}

/* A function definition has this form
   return-type function-name (parameter declarations, if any) {
       declarations
       statements
   }
*/

// Power: raise base to n-th power; n >= 0

int power(int base, int n){
    int i;
    int p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p*base;
    return p;
}