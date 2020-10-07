#include <stdio.h>
#include <math.h>

#define E 0.001
double CefGet()
{
    double n1, n2, n3, n4, Cef1, Cef2;
    n1 = 0;
    n2 = 1;
    n3 = 1;
    n4 = 2;
    Cef1 = n3 / n2;
    Cef2 = n4 / n3;
    while (fabs(Cef1 - Cef2) > E)
    {
        n1 = n2;
        n2 = n3;
        n3 = n4;
        n4 = n2 + n3;
        Cef1 = n3 / n2;
        Cef2 = n4 / n3;
    }
    return Cef1;
}

void main()
{
    double Cef = CefGet();
    printf("%.10f \n", Cef);
}