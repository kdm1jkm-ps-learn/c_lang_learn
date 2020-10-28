#include <stdio.h>
// 미완성

int main()
{
    int majorAxis, minorAxis;
    printf("Enter major axis>>");
    scanf("%d", &majorAxis);
    printf("Enter minor axis>>");
    scanf("%d", &minorAxis);

    int degree = (majorAxis - 1) / (minorAxis / 2 - 1);
    printf("deg: %d\n", degree);

    for (int i = 0; i < minorAxis; i++)
    {
        int temp = majorAxis - i * degree - majorAxis / 2;
        if (temp < 0)
            temp *= -1;
        for (int j = 0; j < temp; j++)
        {
            printf(" . ");
        }
        for (int j = 0; j < (majorAxis / 2 - temp) * 2 + 1; j++)
        {
            printf("%02d ", j + 1);
        }

        printf("\n");
    }
}