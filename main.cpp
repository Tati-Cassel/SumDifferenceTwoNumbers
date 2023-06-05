#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b;
    float c, d;

    int somaInt, difInt;
    float somaFloat, difFloat;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    somaInt = a + b;

    if (a != 0 && b != 0)
    {
        difInt = a - b;
    }
    else if (a != 0 && b == 0)
    {
        difInt = a;
    }
    else if (a == 0 && b != 0)
    {
        difInt = b;
    }

    somaFloat = c + d;

    if (c != 0 && d != 0)
    {
        difFloat = c - d;
    }
    else if (c != 0 && d == 0)
    {
        difFloat = c;
    }
    else if (c == 0 && d != 0)
    {
        difFloat = d;
    }

    printf("%d %d\n", somaInt, difInt);
    printf("%.1f %.1f\n", somaFloat, difFloat);

    return 0;
}
