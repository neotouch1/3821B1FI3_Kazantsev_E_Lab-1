#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i;
    double max, min;
    double a = 0.0, fractional_part;
    double num, sum = 0.0;
    int N = 0;
    double* mas, * mas1;

    do
    {
        printf("Input N: "); // Выводит на экран предложение ввести значение для N
        scanf_s("%d", &N);
        printf("Input min: ");  // Выводит на экран предложение ввести значение для "min"
        scanf_s("%lf", &min);
        printf("Input max: ");  // Выводит на экран предложение ввести значение для "max"
        scanf_s("%lf", &max);
    }

    while (min > max || N <= 0);
   

    mas1 = (double*)malloc(N * sizeof(double));
    mas = (double*)malloc(N * sizeof(double));

    for (i = 0; i < N; i++)
    {
        mas[i] = (double)rand() / RAND_MAX * (max - min) + min;

        fractional_part = modf(a, &num);

        mas1[i] = fractional_part;
    }

    for (i = 0; i < N; i++)
    {
        if (i < 10 != fractional_part * 10)
            sum += mas[i];

        if (i < 100 != fractional_part * 100)
            sum += mas[i];

        if (i < 1000 != fractional_part * 1000)
            sum += mas[i];

        if (i < 10000 != fractional_part * 10000)
            sum += mas[i];

        if (i < 100000 != fractional_part * 100000)
            sum += mas[i];
    }

    {
        if (i < 10 == fractional_part * 10)
            sum -= mas[i];

        if (i < 100 == fractional_part * 100)
            sum -= mas[i];

        if (i < 1000 == fractional_part * 1000)
            sum -= mas[i];

        if (i < 10000 == fractional_part * 10000)
            sum -= mas[i];

        if (i < 100000 == fractional_part * 100000)
            sum -= mas[i];
    }

    printf("SUM:%lf\n", sum);

    free(mas);
    free(mas1);


    return 0;
}
