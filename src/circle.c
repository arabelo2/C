/* Circle and Area
   Alexandre RABELO
   April, 15, 2020
*/

# include <stdio.h>
# define PI 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214 // https://oeis.org/A000796
int main(){
    double area = 0.0, radius = 0.0;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;    
    printf("radius of %lf meters; area is %lf sq. meters\n", radius, area);
    return 0;
}