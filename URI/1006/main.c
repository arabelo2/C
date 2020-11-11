#include <stdio.h>

int main (){

    double A, B, C, MEDIA, wa, wb, wc;
    scanf("%lf%lf%lf", &A, &B, &C);

    wa = 2.0/10;
    wb = 3.0/10;
    wc = 5.0/10;

    MEDIA = (A*wa + B*wb + C*wc);

    printf("MEDIA = %.1lf\n", MEDIA);
    return 0;

}
