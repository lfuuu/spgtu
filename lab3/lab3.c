#include <stdio.h>
#include <math.h>

void main ()
{
    double a, b, c, D;
    scanf("%lf%lf%lf", &a, &b, &c);

    D = pow(b,2) - 4 * a * c;

    if (D < 0) 
    {
        double b1 = -b / 2 * a, D1 = sqrt(fabs(D));
        printf("x1 =  %f - i * %f\n", b1, D1);
        printf("x2 =  %f + i * %f\n", b1, D1);
    }
    else
    {
        double x1 = (-b - sqrt(D)) / (2 * a), x2 = (-b +sqrt(D)) / (2 * a);
        printf("x1 = %f\nx2 = %f\n", x1, x2);    
    }
    
}