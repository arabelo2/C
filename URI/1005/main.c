#include <stdio.h>

int main() {

    double A, B, MEDIA, wa, wb;
    scanf("%lf%lf", &A, &B);
    wa = 3.5/11;
    wb = 7.5/11;
    MEDIA = (A*wa + B*wb);
    printf("MEDIA = %.5lf\n", MEDIA);
    return 0;

}
