#include <stdio.h>
#include <stdio.h>
#include <math.h>

void tab1()
{
    int a = 2, b = 5;
    double h = 0.2;
    /*
      printf("a:\n");
      scanf_s("&lf", &a);

      printf("b:\n");
      scanf_s("&lf", &b);

      printf("h:\n");
      scanf_s("&lf", &h);
    */
    for (double x = a; x <= b; x += h)
    {
        if (x < 3)
        {
            printf("%fl %f\n", log10(log(x) + (sin(x))), x);
        }
        else if (x < 4)
        {
            printf("%fl %f\n", 1 / tan(x + log(x)), x);
        }
        else
        {
            printf("%fl %f\n", 1 / (16 - pow(x, 2)), x);
        }
    }
    printf("\n");
    
}

void tab2()
{
    double sum, m = 20, add, n;

    for (double i = 0; i <= 0.5; i += 0.05)
    {
        sum = -(m * i);// залежність наступного від попереднього
        add = sum;
        n = 2;
        do
        {
            add = pow(-1,n)((add * (m - n + 1) * i) / n);
            sum += add;
            n++;
            // printf("%.2f", n);
        } while fabs(add >= 0.001);
        printf("x = %.3f y = %.3f\n", i, sum + 1);
    }
}
int main()
{
    tab1();

    tab2();

    return 0;
}