#include <stdio.h>

// https://www.urionlinejudge.com.br/judge/en/problems/view/1008

int main() {

    int x; // The employee id
    int y; // The worked hours amount
    float z; // The amount the employee received per worked hours

    scanf ("%d%d%f", &x, &y, &z);

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", x, y*z);

    return 0;
}
