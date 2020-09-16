#include <stdio.h>
#include <math.h>

double input_val(char *str, int fun(double))
{
    int res = 1;
    double par;

    while (res)
    {
        printf("%s", str);
        if (scanf("%lf", &par) == 1) // Количество правильно введенных аргументов
        {
            if (!fun(par))
            { // Вызываем проверочную функцию по адресу fun
                res = 0;
            }
            else
            {
                printf("Ошибка\n");
            }
        }
    }
    return par;
}

int checkA(double par)
{
    if (par == 0) // return par == 0 ? -1 : 0;
        return -1;
    else
        return 0;
}

int checkBC(double par)
{
    return 0;
}

void main()
{
    printf("Решение уравнения A*x^2+B*x+C=0\n");
    double a = input_val("Введите A (не ноль):", checkA);
    double b = input_val("Введите B:", checkBC);
    double c = input_val("Введите C:", checkBC);

    double D = pow(b, 2) - 4 * a * c;

    if (D < 0)
    {
        double b1 = -b / 2 * a, D1 = sqrt(fabs(D));
        printf("x1 =  %f - i * %f\n", b1, D1);
        printf("x2 =  %f + i * %f\n", b1, D1);
    }
    else
    {
        double x1 = (-b - sqrt(D)) / (2 * a), x2 = (-b + sqrt(D)) / (2 * a);
        printf("x1 = %f\nx2 = %f\n", x1, x2);
    }
}