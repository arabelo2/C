/* This function raises an integer m to a positive integer power n.
   Alexandre RABELO
   April, 27, 2020
*/

# include <stdio.h>

int power(int m, int n);

// Test power function
int main(){
    int i;
    
    for (i = 0; i < 10; ++i)
        printf ("%d %d %d\n", i, power(2, i), power(-3, i));
    return 0;
}

// Power: raise base to n-th power; n >= 0
int power(int base, int n){
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p*base;
    return p;
}