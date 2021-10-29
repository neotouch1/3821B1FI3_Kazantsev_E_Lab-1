#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>

int main()
{
    int i;
    double max, min, temp;
    double a, fractional_part;
    double num, sum = 0.0;
    int N = 0;
    double* mas = malloc(N * sizeof(double));
    double* mas1 = malloc(N * sizeof(double));
    while (N <= 0)
    {
        printf("Input N: "); // Выводит на экран предложение ввести значение для N
        scanf_s("%d", &N);
        printf("Input min: ");  // Выводит на экран предложение ввести значение для "min"
        scanf_s("%lf", &min);
        printf("Input max: ");  // Выводит на экран предложение ввести значение для "max"
        scanf_s("%lf", &max);
    }
    if (min > max) // В слуае, если вводимое значение "min" окажется больше чем "max", делается перестановка.
    {
        temp = min;
        min = max;
        max = temp;
    }
   

    for (i = 0; i < N; i++)
    {
        a = (double)rand() / RAND_MAX * (max - min) + min;
        fractional_part = modf(a, &num);
        mas[i] = a;
        mas1[i] = fractional_part;
    }
   
    for (i = 0; i < N; i++)
   {
        if (i >= 1 && i < 10 && i != (int)(mas1[i] * 10))
        {
            sum += mas[i];
        }
        else if (i >= 1 && i < 10 && i == (int)(mas1[i] * 10))
        {
            sum -= mas[i];
        }
        if (i >= 10 && i < 100 && i != (int)(mas1[i] * 100))
        {
            sum += mas[i];
        }
        else if (i >= 10 && i < 100 && i == (int)(mas1[i] * 100))
        {
            sum -= mas[i];
        }
        if (i >= 100 && i < 1000 && i != (int)(mas1[i] * 1000))
        {
            sum += mas[i];
        }
        else if (i >= 100 && i < 1000 && i == (int)(mas1[i] * 1000))
        {
            sum -= mas[i];
        }
        if (i >= 1000 && i < 10000 && i != (int)(mas1[i] * 10000))
        {
            sum += mas[i];
        }
        else if (i >= 1000 && i < 10000 && i == (int)(mas1[i] * 10000))
        {
            sum -= mas[i];
        }
        if (i >= 10000 && i < 100000 && i != (int)(mas1[i] * 100000))
        {
            sum += mas[i];
        }
        else if (i >= 10000 && i < 100000 && i == (int)(mas1[i] * 100000))
        {
            sum -= mas[i];
        }

    }
    printf("SUM:%lf\n", sum);

    free; mas;
    free; mas1;
    
    return 0;
}
